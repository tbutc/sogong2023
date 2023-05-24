#include <string>
#include <vector>
#include "JobPosting.h"

using namespace std;

class ListJobPosting {
private:

public:
    ListJobPosting();
    vector<JobDetail> showJobPosting(int* const ssn, vector<JobPosting> jobPostings);
};