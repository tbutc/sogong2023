#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>
#include <vector>

#include "Login.h"
#include "LoginUI.h"
#include "User.h"


User * Login::showResult(string& id, string& pwd, vector <User>* user_list) {
	//��ġ�ϴ��� Ȯ���ϴ� �۾� �߰�
	bool correspond = true;

	User* matching_user = nullptr; // ��ġ�ϴ� ����ڸ� ������ ������

	for (auto& user : *user_list) {
		if (user.getid() == id && user.getpwd() == pwd) {
			matching_user = &user; // ��ġ�ϴ� ����ڸ� matching_user�� ����
			break; // ��ġ�ϴ� ����ڸ� ã�����Ƿ� �ݺ��� ����
		}
	}
	return matching_user;
}

void Login::log_in(ifstream& inputFile, vector <User> * user_list){
	LoginUI a;

	a.startInterface();
	a.LoginRequest(inputFile, user_list);
}