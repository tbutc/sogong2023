#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>
#include <vector>
#include "JobPosting.h"

using namespace std;

ApplyUI::ApplyUI() {}

void ApplyUI::showInterface() {
    ofstream outputFile("output.txt", ios::app);
    string message = "4.2. ä�� ����\n> ";
    outputFile << message;
    outputFile.close();
}

void ApplyUI::showResult() {
    
}
