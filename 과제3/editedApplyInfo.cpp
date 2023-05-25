#include <iostream>
using namespace std;
#include <vector>
//[회사이름] [사업자번호] [업무]
#include "JobPosting.h"
#include "ApplyInfo.h"

ApplyInfo::ApplyInfo(const string& cn, const string& rn, const string& jt, const int& al, const Date& dl)
    : companyName(cn), registrationNumber(rn), jobTitle(jt), applicantLimit(al), deadline(dl) {}

string ApplyInfo::getCompanyName() const {
    return companyName;
}

string ApplyInfo::getRegistrationNumber() const {
    return registrationNumber;
}

string ApplyInfo::getJobTitle() const {
    return jobTitle;
}

int  ApplyInfo:: getApplicantLimit() const {
    return applicantLimit;
}

Date  ApplyInfo::getDeadline() const {
    return deadline;
}

