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
    string ssn;
    struct JobDetail jobdetail;

public:
    JobPosting(string cn, string ssn, JobDetail jd);
     string getJobPostingcname() ;
     string getJobPostingssn() ;
    JobDetail getJobPostingDetail() ;
};
