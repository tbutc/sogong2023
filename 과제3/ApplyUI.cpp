//수정

#include <iostream>
#include <string>
#include <cstdio>

#include "ApplyUI.h"
#include <fstream>
#include "JobPosting.h"

using namespace std;

ApplyUI::ApplyUI() {}

string ApplyUI::showInterface(ifstream& inputFile) {

    ofstream outputFile("output.txt", ios::app);
    string message = "4.2. 채용 지원\n> ";
    outputFile << message;

    outputFile.close();

    string ssn;
    inputFile >> ssn;

    return ssn;
}



