#include <iostream>
#include <string>
#include <cstdio>

#include "AddJobPostingUI.h"
#include <fstream>
#include "JobPosting.h"


/*
    �Լ� �̸� : ListJobPostingUI::startinterface()
    ���     : ä��������ȸ UI�� ǥ���ϴ� �Լ�
    ���� ���� : details -> ä�뼼������ ����
    ��ȯ��    : ����
*/

using namespace std;

AddJobPostingUI::AddJobPostingUI(){}
 
void AddJobPostingUI::showInterface(vector<JobDetail> jobdetial) {
    ofstream outputFile("output.txt", ios::app);
    string message = "3.1. ä�� ���� ���\n> ";
    outputFile << message;

    message = jobdetail.JobTitle;
    outputFile << message;
    outputFile << " ";

    message = jobdetail.applicantLimit;
    outputFile << message;
    outputFile << " ";

    message = jobdetail.deadline.year;
    outputFile << message;
    outputFile << " /";

    message = jobdetail.deadline.month;
    outputFile << message;
    outputFile << " /";

    message = jobdetail.deadline.day;
    outputFile << message;
    outputFile << " \n";

    outputFile.close();
    
}
