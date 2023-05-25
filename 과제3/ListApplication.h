#pragma once
#include <cstdio>
#include <vector>
#include "Apply.h"
#include <ctime>

class ListApplication
{
private:
	static bool compareByCompanyName(Application a, Application b);

public:
	ListApplication();
	ListApplication(vector<Application>& applications);
	vector<Application> sortApplicationsByCompanyName(vector<Application> applications);
	void cancelApplication(string ssn, vector<Application> applications);
};
