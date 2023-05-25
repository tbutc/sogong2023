#include "SummingUpUI.h"

SummingUpUI::SummingUpUI() {}

void SummingUpUI::startinterface(map<string, int> applicant)
{
	ofstream writeFile("output.txt", std::ios::app);

	writeFile << "\n5.1. ���� ���� ��� \n> ";
	cout << "\n5.1. ���� ���� ��� \n> ";

	bool isFirst = true;

	for ( auto ap : applicant)
	{
		if (!isFirst)
		{
			cout << "\n  ";
			writeFile << "\n   ";
		}
		cout << ap.first << ": " << ap.second;
		writeFile << ap.first << ": " << ap.second;

		isFirst = false;
	}

	writeFile.close();
}
