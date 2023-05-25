#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>
#include <vector>

#include "Logout.h"
#include "LogoutUI.h"
#include "User.h"
#include "LogStatus.h"


/*
	함수 이름 : Logout::showResult
	기능	  : 로그아웃 유저 리턴
	전달 인자 : user_list, logout_user
	반환값    : User 주소값
*/
User* Logout::showResult(vector <User>* user_list, User* logout_user) {
	return logout_user;
}


/*
	함수 이름 : Logout::log_out
	기능	  : 로그아웃 관련 함수 호출
	전달 인자 : user_list, logout_user
	반환값    : User 주소값
*/
User * Logout::log_out(vector <User>* user_list, User* logout_user) {

	LogoutUI a;

	a.startInterface();
	return a.LogoutRequest(user_list, logout_user);

}