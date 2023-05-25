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

void LogoutUI::startInterface() {

    ofstream outputFile("output.txt", ios::app);

    string message = "2.2. ·Î±×¾Æ¿ô \n> ";
    outputFile << message;
    outputFile.close();

    return;
}

User * LogoutUI::LogoutRequest(vector <User>* user_list, User* logout_user) {

    ofstream outputFile("output.txt", ios::app);
    if (logout_user == NULL)cout << "n..";
    outputFile << logout_user->getid() << endl;
    outputFile.close();

    Logout a;
    return a.showResult(user_list, logout_user);

}