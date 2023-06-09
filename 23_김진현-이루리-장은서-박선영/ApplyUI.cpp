﻿//수정

#include <iostream>
#include <string>
#include <cstdio>

#include "ApplyUI.h"
#include <fstream>
#include "JobPosting.h"

using namespace std;
/*
함수 이름: ApplyUI::showInterface
기능: 채용 지원 인터페이스를 표시하고, 사업자 등록 번호를 입력 받는 함수
전달 인자: inputFile -> ifstream 객체
반환값: ssn
*/
ApplyUI::ApplyUI() {}

string ApplyUI::showInterface(ifstream& inputFile) {

    ofstream outputFile("output.txt", ios::app);
    string message = "4.2. 채용 지원\n> ";
    outputFile << message;

    outputFile.close();

    string ssn;
    inputFile >> ssn;

    return ssn;
}
/*
함수 이름: ApplyUI::showresult
기능: JobPosting 객체의 정보를 파일에 출력
전달 인자: JobPosting* jp -> 출력할 JobPosting 객체에 대한 포인터
반환값: 없음
*/
void ApplyUI::showresult(JobPosting* jp)
{
    ofstream outputFile("output.txt", ios::app);
    outputFile << jp->getJobPostingcname() << " " << jp->getJobPostingssn() << " " << jp->getJobPostingDetail().JobTitle << endl;

    outputFile.close();

}



