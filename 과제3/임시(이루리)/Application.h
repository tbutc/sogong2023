#pragma once
#include "JobPosting.h"
#include <string>
#include <ctime>
using namespace std;


class Application {
private:
    string companyName;
    string registrationNumber;
    string jobTitle;
    int applicantLimit;
    Date deadline;

public:
    Application(string& cn, string& rn, string& jt, int al, Date& dl)
        : companyName(cn), registrationNumber(rn), jobTitle(jt), applicantLimit(al), deadline(dl) {}

    string getCompanyName() {
        return companyName;
    }

    string getRegistrationNumber()  {
        return registrationNumber;
    }

    string getJobTitle() {
        return jobTitle;
    }

    int getApplicantLimit()  {
        return applicantLimit;
    }

    Date getDeadline() {
        return deadline;
    }
};
