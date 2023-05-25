/*#include <vector>
#include <iostream>
#include "SearchJobPostingUI.h"
#include "JobPosting.h"
*/
#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>
#include <vector>
#include "JobPosting.h"
#include "SearchJobPostingUI.h"

/*
    �Լ� �̸� : SearchJobPostingUI::startinterface(JobPosting jobposting)
    ���     : ä��������ȸ UI�� ǥ���ϴ� �Լ�
    ���� ���� : details -> ä�뼼������ ����
    ��ȯ��    : ����
*/

using namespace std;

SearchJobPostingUI::SearchJobPostingUI() {}

void SearchJobPostingUI::startInterface(JobPosting jobposting) {
    ofstream outputFile("output.txt", ios::app);
    string message = "4.1. ä�� ���� �˻�\n> ";
    outputFile << message;

    message = jobposting.getJobPostingcname();
    outputFile << message;
    outputFile << " ";

    message = jobposting.getJobPostingssn();
    outputFile << message;
    outputFile << " ";

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