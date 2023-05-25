#include <iostream>
#include <string>
#include <cstdio>

#include "AddJobPostingUI.h"
#include <fstream>
#include "JobPosting.h"


/*
    함수 이름 : ListJobPostingUI::startinterface()
    기능     : 채용정보조회 UI를 표시하는 함수
    전달 인자 : details -> 채용세부정보 집합
    반환값    : 없음
*/

using namespace std;

AddJobPostingUI::AddJobPostingUI(){}
 
JobDetail AddJobPostingUI::startinterface(ifstream& inputFile)
{
    ofstream outputFile("output.txt", ios::app);
    outputFile << "3.1. 채용 정보 등록\n> ";
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

