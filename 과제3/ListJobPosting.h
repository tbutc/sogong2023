#include <string>
#include <vector>
#include "JobPosting.h"

using namespace std;

class ListJobPosting {
private:

public:
    ListJobPosting();
    vector<JobDetail> showJobPosting(string* const cn, vector<JobPosting> jobPostings);
};