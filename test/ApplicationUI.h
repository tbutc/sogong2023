
#pragma once
#include "Apply.h"
#include <ctime>

//정렬과 취소를 위한 ApplicationUI 클래스정의
class ApplicationUI
{
private:

public:

    void showSortedApplications(vector<Application> sortedApplications);
    void PrintcancelApplication(string ssn, vector<Application>& applications);
};
