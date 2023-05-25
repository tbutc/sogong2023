#pragma once
#include <cstdio>
#include <vector>
#include "Apply.h"
#include <ctime>

class ListApplication
{
public:
	ListApplication();
	ListApplication(vector<Application> applications);
	static bool compareByCompanyName(Application a, Application b);
	vector<Application> sortApplicationsByCompanyName(vector<Application> applications);
	void cancelApplication(string ssn, vector<Application> applications);
};
