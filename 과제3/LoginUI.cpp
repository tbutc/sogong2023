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
    함수 이름 : Login::startInterface
    기능	  : 로그인 기능의 인터페이스 담당
    전달 인자 : 없음
    반환값    : 없음
*/
void LoginUI::startInterface() {

    ofstream outputFile("output.txt", ios::app);

    string message = "2.1. 로그인 \n> ";
    outputFile << message;
    outputFile.close();

    return;
}


/*
    함수 이름 : Login::LoginRequest
    기능	  : 로그인 기능의 인터페이스 담당(id, pwd입력 받고 결과 출력)
    전달 인자 : inputFile, user_list
    반환값    : User 주소값
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

        return corr_user; //로그인 성공
    }

    else {
        ofstream outputFile("output.txt", ios::app);
        outputFile << "아이디, 비밀번호가 일치하지 않습니다" << endl;
        outputFile.close();

        return nullptr;
    }
    
}