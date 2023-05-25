#pragma once
#include <ctime>
#include <vector>
#include <string>
#include "JobPosting.h"
#include "Application.h"

class ApplyUI
{
private:

public:
    ApplyUI();
    void showInterface(JobPosting jobposting);
    void showSortedApplications(vector<Application> sortedApplications);
    //void PrintcancelApplication( string& ssn, vector<Application>& applications);
};
