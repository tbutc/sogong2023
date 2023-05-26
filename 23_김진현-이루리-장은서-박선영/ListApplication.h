#pragma once
#include <cstdio>
#include <vector>
#include "Apply.h"
#include "ApplicationUI.h"
#include <ctime>
//control 클래스로 지원 관련 기능을 ListApplication 클래스에 정의
class ListApplication
{
private:
	static bool compareByCompanyName(Application a, Application b);

public:
	ListApplication();
	ListApplication(vector<Application>& applications);
	vector<Application> sortApplicationsByCompanyName(vector<Application> applications);
	void cancelApplication(string ssn, vector<Application>& applications);
};
