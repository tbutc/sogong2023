#include <iostream>
#include <string>
#include <cstdio>
#include <vector>

#include "memWithdraw.h"
#include "memWithdrawUI.h"
#include "User.h"

User * memWithdraw::showResult(vector <User>* user_list, User* logout_user) {
	
	User* matching_user = nullptr; // 일치하는 사용자를 저장할 포인터

	for (auto& user : *user_list) {
		if (user.getid() == logout_user->getid() && user.getpwd() == logout_user->getpwd()) {
			matching_user = &user; // 일치하는 사용자를 matching_user에 저장
			break; // 일치하는 사용자를 찾았으므로 반복문 종료
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