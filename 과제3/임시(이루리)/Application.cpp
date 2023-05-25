#include <iostream>
using namespace std;
#include <vector>
#include "Application.h"

Application::Application(const string& cn, const string& rn, const string& jt, const int al, const Date& dl)
    : companyName(cn), registrationNumber(rn), jobTitle(jt), applicantLimit(al), deadline(dl) {}

string Application::getCompanyName() const {
    return companyName;
}

string Application::getRegistrationNumber() const {
    return registrationNumber;
}

string Application::getJobTitle() const {
    return jobTitle;
}

int  Application:: getApplicantLimit() const {
    return applicantLimit;
}

Date  Application::getDeadline() const {
    return deadline;
}

