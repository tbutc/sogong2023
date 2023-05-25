#pragma once
#include <string>
#include <ctime>

using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

struct JobDetail {
    string JobTitle;
    int applicantLimit;
    Date deadline;
};

class JobPosting {
private:
    string companyname;
    string id;
    string ssn;
    struct JobDetail jobdetail;

public:
    JobPosting(string cn, string id, string ssn, JobDetail jd);
    string getJobPostingcname();
    string getJobPostingid();
    string getJobPostingssn();
    JobDetail getJobPostingDetail() ;
};
