#include "ListJobPosting.h"


ListJobPosting::ListJobPosting() {}

vector< JobDetail> ListJobPosting:: start(string  ssn, vector<JobPosting> jobPostings) {
    vector<JobDetail> Details;
    for (auto posting : jobPostings)
    {
        if (ssn == posting.getJobPostingssn())
        {
            Details.push_back(posting.getJobPostingDetail());
        }
    }
    ListJobPostingUI.startinterface(Details);
}