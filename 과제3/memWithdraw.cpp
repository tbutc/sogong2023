#include <iostream>
#include <string>
#include <cstdio>
#include <vector>

#include "memWithdraw.h"
#include "memWithdrawUI.h"
#include "User.h"

User * memWithdraw::showResult(vector <User>* user_list, User* logout_user) {
	
	User* matching_user = nullptr; // ��ġ�ϴ� ����ڸ� ������ ������

	for (auto& user : *user_list) {
		if (user.getid() == logout_user->getid() && user.getpwd() == logout_user->getpwd()) {
			matching_user = &user; // ��ġ�ϴ� ����ڸ� matching_user�� ����
			break; // ��ġ�ϴ� ����ڸ� ã�����Ƿ� �ݺ��� ����
		}
	}
	return matching_user;
}

User*  memWithdraw:: withdraw(vector <User>* user_list, User* logout_user) {
	memWithdrawUI a;
	a.startInterface();

	//~User

	return a.memberWithdraw(user_list, logout_user);
}