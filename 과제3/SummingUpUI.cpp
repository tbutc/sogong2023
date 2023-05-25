#include "SummingUpUI.h"

SummingUpUI::SummingUpUI() {}

void SummingUpUI::startinterface(map<string, int> applicant)
{
	ofstream writeFile("output.txt", std::ios::app);

	writeFile << "\n5.1. 지원 정보 통계 \n> ";

	bool isFirst = true;

	for ( auto ap : applicant)
	{
		if (!isFirst)
		{
			writeFile << "\n   ";
		}
		writeFile << ap.first << ": " << ap.second;

		isFirst = false;
	}

	writeFile.close();
}
