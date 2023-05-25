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
 
JobDetail AddJobPostingUI::startinterface(ifstream& inputFile)
{
    ofstream outputFile("output.txt", ios::app);
    outputFile << "3.1. ä�� ���� ���\n> ";
    outputFile.close();

    JobDetail jobdetail;
    inputFile >> jobdetail.JobTitle;
    inputFile >> jobdetail.applicantLimit;
    inputFile >> jobdetail.deadline;
    return jobdetail;
}

void AddJobPostingUI::showresult(JobDetail jd)
{
    ofstream outputFile("output.txt", ios::app);
    outputFile << jd.JobTitle << " ";
    outputFile << jd.applicantLimit << " ";
    outputFile << jd.deadline << "\n";
    outputFile.close();
}

