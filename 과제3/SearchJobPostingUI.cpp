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

string SearchJobPostingUI::startInterface(ifstream& inputFile) {
    

    ofstream outputFile("output.txt", ios::app);
    string message = "4.1. 채용 정보 검색\n> ";
    outputFile << message;

    outputFile.close();

    string cn;
    inputFile >> cn;

    return cn;

}
/*
함수 이름: SearchJobPostingUI::startInterface2
기능: 채용 정보 결과를 출력하는 함수
전달 인자: posting -> 검색된 채용 정보를 가리키는 JobPosting 객체의 포인터
반환값: 없음
*/


void SearchJobPostingUI::startInterface2(JobPosting* posting) {

    ofstream outputFile("output.txt", ios::app);

    outputFile << posting->getJobPostingcname() << " " << posting->getJobPostingssn() << " ";
    outputFile << posting->getJobPostingDetail().JobTitle << " ";
    outputFile << posting->getJobPostingDetail().applicantLimit << " ";
    outputFile << posting->getJobPostingDetail().deadline << endl;

    outputFile.close();

}
