#pragma once
#include <cstdio>
#include <vector>
#include "Apply.h"
#include <ctime>

class ApplicationControl
{
public:
	vector<Application> sortApplicationsByCompanyName(vector<Application>& applications);
	void cancelApplication(string& ssn, vector<Application>& applications);
};
