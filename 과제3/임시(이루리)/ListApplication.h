#pragma once
#include <cstdio>
#include <vector>
#include "Application.h"
#include "ApplyUI.h"
#include <ctime>

class ListApplication
{
private:

public:
	ListApplication();
	ListApplication(vector<Application> applications);
	static bool compareByCompanyName(Application a, Application b);

	//void cancelApplication(string& ssn, vector<Application>& applications);
};
