#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>

#include "LoginUI.h"

using namespace std;

void LoginUI::startInterface() {

    ofstream outputFile("output.txt", ios::app);

    string message = "2.1. ·Î±×ÀÎ \n> ";
    outputFile << message;
    outputFile.close();

}

void LoginUI::LoginRequest() {

    Login a;
    a.showResult();

}