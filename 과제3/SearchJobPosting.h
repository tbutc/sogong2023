#include <string>
#include <vector>
#include "JobPosting.h"
#include "SearchJobPostingUI.h"


using namespace std;

class SearchJobPosting
{
public:
    void getJobPostingdetail();
    vector<JobDetail> JobPostingdetail(string cn, vector<JobPosting> jobPostings);
}; 