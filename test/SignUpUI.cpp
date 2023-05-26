#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>

#include "SignUpUI.h"
#include "SignUp.h"
#include "User.h"

using namespace std;

/*
    함수 이름 : SignUpUI::startInterface
    기능	  : 회원가입 관련 인터페이스 수행
    전달 인자 : 없음
    반환값    : 없음
*/
void SignUpUI::startInterface() {

    ofstream outputFile("output.txt", ios::app);

    string message = "1.1. 회원가입 \n> ";
    outputFile << message;
    outputFile.close();
    
}



/*
    함수 이름 : SignUpUI::signup
    기능	  : 회원가입 관련 인터페이스 수행(user 변수 입력받고 출력하기) 
    전달 인자 : inputFile
    반환값    : User
*/
User SignUpUI::signup(ifstream& inputFile){
    string id, pwd, name, SSN;
    int type;

    inputFile >> type;
    inputFile >> name;
    inputFile >> SSN;
    inputFile >> id;
    inputFile >> pwd;
    
    SignUp a;
    User newUser = a.showResult(type, name, SSN, id, pwd);

    ofstream outputFile("output.txt", ios::app);
    outputFile << type << ' ';
    outputFile << name << ' ';
    outputFile << SSN << ' ';
    outputFile << id << ' ';
    outputFile << pwd << endl;

    outputFile.close();
    
    return newUser;
}