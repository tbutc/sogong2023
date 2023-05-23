#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>

#include "SignUpUI.h"
#include "SignUp.h"
#include "User.h"

using namespace std;


void SignUpUI::startInterface() {

    ofstream writeFile;
    writeFile.open("input.txt");
    string str = "1.1. 회원가입 \n> ";
    writeFile.write(str.c_str(), str.size());
    
}


User SignUpUI::signup(){
    string id, pwd, name, SSN;
    int type;

    /*
    FILE* inputFile = fopen("input.txt", "r");
    fscanf(inputFile, "%d %s %s %s %s", &type, name, SSN, id, pwd);
    fclose(inputFile);
    */

    cin >> type;
    cin >> id;
    cin >> pwd;
    cin >> name;
    cin >> SSN;

    SignUp a;
    User newUser = a.showResult(type, name, SSN, id, pwd);

    cout << type;
    cout << id;
    cout << pwd;
    cout << name;
    cout << SSN;

    /*
    FILE* outputFile = fopen("output.txt", "w");
    fprintf(outputFile, "%d %s %s %s %s\n", type, name, SSN, id, pwd);
    fclose(outputFile);
    */

    return newUser;
}