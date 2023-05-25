#include <string>
#include <vector>
#include "JobPosting.h"

using namespace std;

class AddJobPosting
{
private:
    
    string companyName;
    string jobId;
    string jobPostingssn;
    JobDetail jobPostingDetail;
public:
    
    vector<JobDetail> start(string ssn, vector<JobPosting> jobPostings);

    AddJobPosting(string cn, string id, string ssn, JobDetail jd);
};
