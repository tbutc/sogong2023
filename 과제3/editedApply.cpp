#ifndef APPLY_H
#define APPLY_H
#include <cstdio>
#include <vector>
#include "ApplyInfo.h"
#include "JobPosting.h"

#include <ctime>

struct Date {
    int year;
    int month;
    int day;
};

using namespace std;

class Apply
{
public:
    vector<ApplyInfo> start(string ssn, vector<JobPosting> jobPostings);
    vector<ApplyInfo> sortApplicationsByCompanyName(const vector<ApplyInfo>& applications);
    void cancelApplication(string ssn, vector<Application>& applications);
};

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
#endif

 
