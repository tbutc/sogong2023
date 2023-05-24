#include "SummingUpUI.h"


SummingUpUI::SummingUpUI() {}

void SummingUpUI::startinterface(string name, int usertype, vector<Application> Applications)
{

	cout << "5.1. 지원 정보 통계 \n> ";

	map<string, int> applicant = SummingUp().sumup(name, usertype, Applications);

	for (const auto& ap : applicant) {
		cout << ap.first << ": " << ap.second << '\n';
	}

}


