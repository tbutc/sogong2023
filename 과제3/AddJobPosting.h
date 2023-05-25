#include <string>
#include <vector>
#include "JobPosting.h"

using namespace std;

class AddJobPosting
{
public:
    AddJobPosting();
    vector<JobDetail> start(string ssn, vector<JobPosting> jobPostings);


};
