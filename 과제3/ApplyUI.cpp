#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>

#include "ApplyUI.h"
#include "Apply.h"
#inclue "JobPosting.h"
using namespace std;

void ApplyUI::startInterface() {
    ofstream writeFile;
    writeFile.open("input.txt");
    string str = "4.2. ä�� ���� \n> ";
    writeFile.write(str.c_str(), str.size());
}

void ApplyUI::ApplyRequest() {
    strinig SSN;
    cin >> SSN;


    cout << CompanyName;
    cout << SSN;
    cout << JobTitle;
}