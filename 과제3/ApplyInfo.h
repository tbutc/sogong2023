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
    string* const companyname;
    struct JobDetail jobdetail;

public:
    JobPosting(string* const cn, JobDetail jd);
    const string* getJobPostingcname() const;
    JobDetail getJobPostingDetail() const;
};

