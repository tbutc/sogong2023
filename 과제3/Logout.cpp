#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>
#include <vector>

#include "Logout.h"
#include "LogoutUI.h"
#include "User.h"
#include "LogStatus.h"


User* Logout::showResult(vector <User>* user_list, User* logout_user) {
	return logout_user;
}

User * Logout::log_out(vector <User>* user_list, User* logout_user) {

	LogoutUI a;

	a.startInterface();
	return a.LogoutRequest(user_list, logout_user);

}