#include <iostream>
#include <string>
#include <cstdio>
#include "SignUp.h"
#include "User.h"

using namespace std;


User SignUp :: showResult(int type, string name, string SSN, string id, string pwd) {
	User newUser = User(type, name, SSN, id, pwd);
	return newUser;
}