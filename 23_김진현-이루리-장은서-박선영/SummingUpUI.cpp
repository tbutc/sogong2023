#include "SummingUpUI.h"

/*
	함수 이름 : SummingUp::SummingUp()
	기능	  : 통계출력 UI를 표시하는 함수
	전달 인자 : applicant -> 회사회원이라면 업무별 지원자수, 일반회원이라면 업무별 지원횟수를 담은 정보
	반환값    : 없음
*/
void SummingUpUI::startinterface(map<string, int> applicant)
{
	ofstream writeFile("output.txt", std::ios::app);

	writeFile << "\n5.1. 지원 정보 통계 \n> ";

	bool isFirst = true;
	cout << "hello";
	for ( auto ap : applicant)
	{
		if (!isFirst)
		{
			writeFile << "\n   ";
		}
		cout << "hi";
		writeFile << ap.first << ": " << ap.second;

		isFirst = false;
	}

	writeFile << "\n";

	writeFile.close();
}
