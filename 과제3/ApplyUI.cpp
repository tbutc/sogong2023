#include <iostream>
#include <string>
#include <cstdio>

#include "ApplyUI.h"
#include <fstream>
#include "JobPosting.h"

using namespace std;

ApplyUI::ApplyUI() {}

void ApplyUI::showInterface(JobPosting jobposting) {
    ofstream outputFile("output.txt", ios::app);
    string message = "4.2. 채용 지원\n> ";
    outputFile << message;

    message = jobposting.getJobPostingcname();
    outputFile << message;
    outputFile << " ";

    message = jobposting.getJobPostingssn();
    outputFile << message;
    outputFile << " ";

    message = jobposting.getJobPostingDetail().JobTitle;
    outputFile << message;
    outputFile << " \n";

    outputFile.close();

}


