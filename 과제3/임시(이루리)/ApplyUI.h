#pragma once
#include "ListApplication.h"
#include <ctime>

class ApplyUI
{
private:

public:
    ApplyUI();
    void showInterface(JobPosting jobposting);
    void showSortedApplications( vector<Application>& sortedApplications);
    void PrintcancelApplication( string& ssn, vector<Application>& applications);
};
