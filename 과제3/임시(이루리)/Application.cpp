#include <iostream>
using namespace std;
#include <vector>
//[회사이름] [사업자번호] [업무]
#include "Application.h"

Application::Application(string& cn, string& rn, string& jt, int al, Date& dl)
    : companyName(cn), registrationNumber(rn), jobTitle(jt), applicantLimit(al), deadline(dl) {}

string Application::getCompanyName()  {
    return companyName;
}

string Application::getRegistrationNumber()  {
    return registrationNumber;
}

string Application::getJobTitle()  {
    return jobTitle;
}

int  Application:: getApplicantLimit()  {
    return applicantLimit;
}

Date  Application::getDeadline()  {
    return deadline;
}

