
#pragma once
#include "Apply.h"
#include <ctime>

//ApplicationUI 클래스정의
class ApplicationUI
{
private:

public:

    void showSortedApplications(vector<Application> sortedApplications);
    void PrintcancelApplication(string ssn, vector<Application>& applications);
};
