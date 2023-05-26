#include <iostream>
#include <string>
#include <cstdio>
#include "SignUp.h"
#include "SignUpUI.h"


using namespace std;

/*
	�Լ� �̸� : SignUp::showResult
	���	  : ȸ������ ��û ���� ���� ����
	���� ���� : type, name, SSN, id, pwd
	��ȯ��    : User
*/
User SignUp :: showResult(int type, string name, string SSN, string id, string pwd) {
	User newUser = User(type, name, SSN, id, pwd);
	return newUser;
}


/*
	�Լ� �̸� : SignUp::join
	���	  : ȸ������ ���� �Լ� ȣ��
	���� ���� : inputFile
	��ȯ��    : User
*/
User SignUp::join(ifstream& inputFile) {
	SignUpUI a;

	a.startInterface(); // 1.startInterface
	return a.signup(inputFile);
}
