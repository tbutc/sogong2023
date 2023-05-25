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
 
void AddJobPostingUI::showInterface(vector<JobDetail> jobdetial) {
    ofstream outputFile("output.txt", ios::app);
    string message = "3.1. 채용 정보 등록\n> ";
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
