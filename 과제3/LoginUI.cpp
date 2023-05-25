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
    �Լ� �̸� : Login::startInterface
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
    �Լ� �̸� : Login::LoginRequest
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


    if (corr_user!=nullptr) {
        LogStatus a;
        a.change_log_user(corr_user);
        a.activate();
        
        ofstream outputFile("output.txt", ios::app);
        outputFile << corr_user->getid() << ' ';
        outputFile << corr_user->getpwd() << endl;

        outputFile.close();

        return corr_user; //�α��� ����
    }

    else {
        ofstream outputFile("output.txt", ios::app);
        outputFile << "���̵�, ��й�ȣ�� ��ġ���� �ʽ��ϴ�" << endl;
        outputFile.close();

        return nullptr;
    }
    
}