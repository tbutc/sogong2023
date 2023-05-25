#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>

#include "memWithdrawUI.h"
#include "memWithdraw.h"

void memWithdrawUI::startInterface() {
    ofstream outputFile("output.txt", ios::app);

    string message = "1.2. È¸¿øÅ»Åð \n> ";
    outputFile << message;
    outputFile.close();

    return;
}

User * memWithdrawUI::memberWithdraw(vector <User>* user_list, User* logout_user) {
    memWithdraw a;

    ofstream outputFile("output.txt", ios::app);

    outputFile << logout_user->getid() << endl;
    outputFile.close();

    return a.showResult(user_list, logout_user);
}