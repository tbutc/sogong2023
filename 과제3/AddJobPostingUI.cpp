#include <iostream>
#include <string>
#include <cstdio>

#include "AddJobPostingUI.h"
#include <fstream>
#include "JobPosting.h"

using namespace std;

AddJobPostingUI::AddJobPostingUI(){}
 
void AddJobPostingUI::showInterface(JobPosting jobposting) {
    ofstream outputFile("output.txt", ios::app);
    string message = "3.1. 채용 정보 등록\n> ";
    outputFile << message;

    message = jobposting.getJobPostingDetail().JobTitle;
    outputFile << message;
    outputFile << " ";

    message = jobposting.getJobPostingDetail().applicantLimit;
    outputFile << message;
    outputFile << " ";

    message = jobposting.getJobPostingDetail().deadline.year;
    outputFile << message;
    outputFile << " /";

    message = jobposting.getJobPostingDetail().deadline.month;
    outputFile << message;
    outputFile << " /";

    message = jobposting.getJobPostingDetail().deadline.day;
    outputFile << message;
    outputFile << " \n";

    outputFile.close();

}