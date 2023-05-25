//수정

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



