#include <iostream>
#include <string>
#include <cstdio>
#include <vector>

#include "memWithdraw.h"
#include "memWithdrawUI.h"
#include "User.h"


/*
�Լ� �̸�: memWithdraw::showResult
���: ȸ��Ż�� ��ġ�ϴ� user ã��
���� ����: user_list, logout_user
��ȯ��: User �ּҰ�
*/
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

/*
�Լ� �̸�: memWithdraw::withdraw
���: ��ü �Լ� ���δ� control ����
���� ����: user_list, logout_user
��ȯ��: User �ּҰ�
*/
User*  memWithdraw:: withdraw(vector <User>* user_list, User* logout_user) {
	memWithdrawUI a;
	a.startInterface();

	return a.memberWithdraw(user_list, logout_user);
}