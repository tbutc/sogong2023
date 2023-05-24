#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>

#include "SignUpUI.h"
#include "SignUp.h"
#include "User.h"

using namespace std;


void SignUpUI::startInterface() {

    ofstream outputFile("output.txt");

    string message = "1.1. 회원가입 \n> ";
    outputFile << message;
    outputFile.close();
    
}


User SignUpUI::signup(){
    string id, pwd, name, SSN;
    int type;

    ifstream inputFile("input.txt");

    inputFile >> type;
    inputFile >> name;
    inputFile >> SSN;
    inputFile >> id;
    inputFile >> pwd;

    inputFile.close();
    
   

    SignUp a;
    User newUser = a.showResult(type, name, SSN, id, pwd);

    ofstream outputFile("output.txt");
    outputFile << type << ' ';
    outputFile << name << ' ';
    outputFile << SSN << ' ';
    outputFile << id << ' ';
    outputFile << pwd << endl;

    outputFile.close();
    
    return newUser;
}