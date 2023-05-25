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
    함수 이름 : SearchJobPostingUI::startinterface(JobPosting jobposting)
    기능     : 채용정보조회 UI를 표시하는 함수
    전달 인자 : details -> 채용세부정보 집합
    반환값    : 없음
*/

using namespace std;

SearchJobPostingUI::SearchJobPostingUI() {}

void SearchJobPostingUI::startInterface(JobPosting jobposting) {
    ofstream outputFile("output.txt", ios::app);
    string message = "4.1. 채용 정보 검색\n> ";
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