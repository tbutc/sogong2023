#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>
#include <vector>

#include "Login.h"
#include "LoginUI.h"
#include "User.h"
#include "LogStatus.h"

using namespace std;

/*
    �Լ� �̸� : LoginUI::startInterface
    ���	  : �α��� ����� �������̽� ���
    ���� ���� : ����
    ��ȯ��    : ����
*/
void LoginUI::startInterface() {

    ofstream outputFile("output.txt", ios::app);

    string message = "2.1. �α��� \n> ";
    outputFile << message;
    outputFile.close();

    return;
}


/*
    �Լ� �̸� : LoginUI::LoginRequest
    ���	  : �α��� ����� �������̽� ���(id, pwd�Է� �ް� ��� ���)
    ���� ���� : inputFile, user_list
    ��ȯ��    : User �ּҰ�
*/
User * LoginUI::LoginRequest(ifstream& inputFile, vector <User>* user_list) {

    string id, pwd;

    inputFile >> id;
    inputFile >> pwd;

    Login a;

    User* corr_user= a.showResult(id, pwd, user_list);

    ofstream outputFile("output.txt", ios::app);

    if (corr_user!=nullptr) {
        LogStatus a;
        a.change_log_user(corr_user);
        a.activate();
        
        outputFile << corr_user->getid() << ' ';
        outputFile << corr_user->getpwd() << endl;


        return corr_user; //�α��� ����
    }

    else {
        outputFile << "���̵�, ��й�ȣ�� ��ġ���� �ʽ��ϴ�" << endl;

        return nullptr;
    }
    
    outputFile.close();
}