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
    �Լ� �̸� : Logout::startInterface
    ���	  : �α׾ƿ� �������̽� ����
    ���� ���� : ����
    ��ȯ��    : ����
*/
void LogoutUI::startInterface() {

    ofstream outputFile("output.txt", ios::app);

    string message = "2.2. �α׾ƿ� \n> ";
    outputFile << message;
    outputFile.close();

    return;
}


/*
    �Լ� �̸� : Logout::startInterface
    ���	  : �α׾ƿ� �������̽� ����
    ���� ���� : ����
    ��ȯ��    : ����
*/
User * LogoutUI::LogoutRequest(vector <User>* user_list, User* logout_user) {

    ofstream outputFile("output.txt", ios::app);
    outputFile << logout_user->getid() << endl;
    outputFile.close();

    Logout a;
    return a.showResult(user_list, logout_user);

}