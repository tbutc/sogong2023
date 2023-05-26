#include <iostream>
#include <string>
#include <cstdio>
#include "SignUp.h"
#include "SignUpUI.h"


using namespace std;

/*
	함수 이름 : SignUp::showResult
	기능	  : 회원가입 요청 받은 유저 생성
	전달 인자 : type, name, SSN, id, pwd
	반환값    : User
*/
User SignUp :: showResult(int type, string name, string SSN, string id, string pwd) {
	User newUser = User(type, name, SSN, id, pwd);
	return newUser;
}


/*
	함수 이름 : SignUp::join
	기능	  : 회원가입 관련 함수 호출
	전달 인자 : inputFile
	반환값    : User
*/
User SignUp::join(ifstream& inputFile) {
	SignUpUI a;

	a.startInterface(); // 1.startInterface
	return a.signup(inputFile);
}
