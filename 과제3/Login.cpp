#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>
#include <vector>

#include "Login.h"
#include "LoginUI.h"
#include "User.h"


User * Login::showResult(string& id, string& pwd, vector <User>* user_list) {
	//일치하는지 확인하는 작업 추가
	bool correspond = true;

	User* matching_user = nullptr; // 일치하는 사용자를 저장할 포인터

	for (auto& user : *user_list) {
		if (user.getid() == id && user.getpwd() == pwd) {
			matching_user = &user; // 일치하는 사용자를 matching_user에 저장
			break; // 일치하는 사용자를 찾았으므로 반복문 종료
		}
	}
	return matching_user;
}

void Login::log_in(ifstream& inputFile, vector <User> * user_list){
	LoginUI a;

	a.startInterface();
	a.LoginRequest(inputFile, user_list);
}