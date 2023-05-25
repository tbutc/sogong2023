#include "Apply.h"
#include "JobPosting.h"

#include <ctime>
struct Date {
    int year;
    int month;
    int day;
};
class ApplyUI
{
private:

public:
    ApplyUI();
    void showInterface(JobPosting jobposting);
    void showSortedApplications(const vector<ApplyInfo>& sortedApplications);
    void cancelApplication(const string& ssn, vector<Application>& applications);
};
