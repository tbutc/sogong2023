
#pragma once
#include "Apply.h"
#include <ctime>

class ApplicationUI
{
private:

public:

    ApplicationUI();

    void showSortedApplications(vector<Application> sortedApplications);
    void PrintcancelApplication(string ssn, vector<Application> applications);
};
