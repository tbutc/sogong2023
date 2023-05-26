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
	�Լ� �̸� : Login::showResult
    ���	  : �α��� ��û ���� id,pwd�� user_list���� ��ġ�ϴ� User�� �ִ��� �˻�
    ���� ���� : id, pwd, user_list
    ��ȯ��    : User �ּҰ�
*/
User * Login::showResult(string& id, string& pwd, vector <User>* user_list) {

	User* matching_user = nullptr; // ��ġ�ϴ� ����ڸ� ������ ������

	for (auto& user : *user_list) {
		if (user.getid() == id && user.getpwd() == pwd) {
			matching_user = &user; // ��ġ�ϴ� ����ڸ� matching_user�� ����
			break; // ��ġ�ϴ� ����ڸ� ã�����Ƿ� �ݺ��� ����
		}
	}

	return matching_user;
}


/*
	�Լ� �̸� : Login::log_in
	���	  : �α��� ����� �����ϴ� login control�� �Լ�
	���� ���� : inputFile, user_list
	��ȯ��    : User �ּҰ�
*/
User * Login::log_in(ifstream& inputFile, vector <User> * user_list){
	
	LoginUI a;

	a.startInterface();
	return a.LoginRequest(inputFile, user_list);

}