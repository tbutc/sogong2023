#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>
#include <vector>

#include "Logout.h"
#include "LogoutUI.h"
#include "User.h"
#include "LogStatus.h"

using namespace std;


/*
    함수 이름 : Logout::startInterface
    기능	  : 로그아웃 인터페이스 수행
    전달 인자 : 없음
    반환값    : 없음
*/
void LogoutUI::startInterface() {

    ofstream outputFile("output.txt", ios::app);

    string message = "2.2. 로그아웃 \n> ";
    outputFile << message;
    outputFile.close();

    return;
}


/*
    함수 이름 : Logout::startInterface
    기능	  : 로그아웃 인터페이스 수행
    전달 인자 : 없음
    반환값    : 없음
*/
User * LogoutUI::LogoutRequest(vector <User>* user_list, User* logout_user) {

    ofstream outputFile("output.txt", ios::app);
    if (logout_user == NULL)cout << "n..";
    outputFile << logout_user->getid() << endl;
    outputFile.close();

    Logout a;
    return a.showResult(user_list, logout_user);

}