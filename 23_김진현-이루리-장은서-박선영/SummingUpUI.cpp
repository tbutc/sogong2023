#include "SummingUpUI.h"

/*
	�Լ� �̸� : SummingUp::SummingUp()
	���	  : ������ UI�� ǥ���ϴ� �Լ�
	���� ���� : applicant -> ȸ��ȸ���̶�� ������ �����ڼ�, �Ϲ�ȸ���̶�� ������ ����Ƚ���� ���� ����
	��ȯ��    : ����
*/
void SummingUpUI::startinterface(map<string, int> applicant)
{
	ofstream writeFile("output.txt", std::ios::app);

	writeFile << "\n5.1. ���� ���� ��� \n> ";

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
