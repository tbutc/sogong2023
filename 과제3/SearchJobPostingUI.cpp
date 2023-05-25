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

string SearchJobPostingUI::startInterface(ifstream& inputFile) {
    

    ofstream outputFile("output.txt", ios::app);
    string message = "4.1. ä�� ���� �˻�\n> ";
    outputFile << message;

    outputFile.close();

    string cn;
    inputFile >> cn;

    return cn;

}

void SearchJobPostingUI::startInterface2(JobPosting* posting) {

    ofstream outputFile("output.txt", ios::app);

    outputFile << posting->getJobPostingcname() << " " << posting->getJobPostingssn() << " ";
    outputFile << posting->getJobPostingDetail().JobTitle << " ";
    outputFile << posting->getJobPostingDetail().applicantLimit << " ";
    outputFile << posting->getJobPostingDetail().deadline << endl;

    outputFile.close();

}