#ifndef APPLYINFO_H
#define APPLYINFO_H
#include "JobPosting.h"
#include <string>
#include <ctime>

using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

class ApplyInfo {
private:
    string companyName;
    string registrationNumber;
    string jobTitle;
    int applicantLimit;
    Date deadline;

public:
    ApplyInfo(const string& cn, const string& rn, const string& jt, const int& al, const Date& dl)
        : companyName(cn), registrationNumber(rn), jobTitle(jt), applicantLimit(al), deadline(dl) {}

    string getCompanyName() const {
        return companyName;
    }

    string getRegistrationNumber() const {
        return registrationNumber;
    }

    string getJobTitle() const {
        return jobTitle;
    }

    int getApplicantLimit() const {
        return applicantLimit;
    }

    Date getDeadline() const {
        return deadline;
    }

};

#endif
