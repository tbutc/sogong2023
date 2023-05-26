#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>
#include <vector>

#include "Login.h"
#include "LoginUI.h"
#include "User.h"
#include "LogStatus.h"


/*
	함수 이름 : Login::showResult
    기능	  : 로그인 요청 받은 id,pwd가 user_list에서 일치하는 User가 있는지 검사
    전달 인자 : id, pwd, user_list
    반환값    : User 주소값
*/
User * Login::showResult(string& id, string& pwd, vector <User>* user_list) {

	User* matching_user = nullptr; // 일치하는 사용자를 저장할 포인터

	for (auto& user : *user_list) {
		if (user.getid() == id && user.getpwd() == pwd) {
			matching_user = &user; // 일치하는 사용자를 matching_user에 저장
			break; // 일치하는 사용자를 찾았으므로 반복문 종료
		}
	}

	return matching_user;
}


/*
	함수 이름 : Login::log_in
	기능	  : 로그인 기능을 수행하는 login control의 함수
	전달 인자 : inputFile, user_list
	반환값    : User 주소값
*/
User * Login::log_in(ifstream& inputFile, vector <User> * user_list){
	
	LoginUI a;

	a.startInterface();
	return a.LoginRequest(inputFile, user_list);

}