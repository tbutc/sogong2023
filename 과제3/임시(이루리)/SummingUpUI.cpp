#include "SummingUpUI.h"

SummingUpUI::SummingUpUI() {}

void SummingUpUI::startinterface(map<string, int> applicant)
{

	cout << "5.1. 지원 정보 통계 \n> ";

	for ( auto ap : applicant) {
		cout << ap.first << ": " << ap.second << '\n';
	}

}
