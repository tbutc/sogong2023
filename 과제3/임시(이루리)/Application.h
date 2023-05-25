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
    Application(const std::string& cn, const std::string& rn, const std::string& jt, int al, const Date& dl)
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
