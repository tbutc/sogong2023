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
    int* const ssn;
    struct JobDetail jobdetail;

public:
    JobPosting(string* const cn, int* const ssn, JobDetail jd);
    const string* getJobPostingcname() const;
    const int* getJobPostingssn() const;

    JobDetail getJobPostingDetail() const;
};
