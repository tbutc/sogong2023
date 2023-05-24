#include <string>
#include <vector>
#include "JobPosting.h"

using namespace std;

class ListJobPosting {
private:

public:
    ListJobPosting();
    vector<JobDetail> start(string  ssn, vector<JobPosting> jobPostings);
};