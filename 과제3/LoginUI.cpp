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

void LoginUI::startInterface() {

    ofstream outputFile("output.txt", ios::app);

    string message = "2.1. 로그인 \n> ";
    outputFile << message;
    outputFile.close();

    return;
}

void LoginUI::LoginRequest(ifstream& inputFile, vector <User>* user_list) {

    string id, pwd;

    inputFile >> id;
    inputFile >> pwd;

    /*
    ofstream outputFile("output.txt", ios::app);
    outputFile << id << " ";
    outputFile << pwd << endl;

    outputFile.close();
    */
    

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
    }

    else {
        ofstream outputFile("output.txt", ios::app);
        outputFile << "아이디, 비밀번호가 일치하지 않습니다" << endl;
        outputFile.close();
    }
    
}