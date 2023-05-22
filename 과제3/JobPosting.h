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
    JobPosting(string* const cn, string jt, int al, Date dl);
    const string* getJobPostingcname() const;
    JobDetail getJobPostingDetail() const;
};
