#include "ListJobPosting.h"


ListJobPosting::ListJobPosting() {}

vector< JobDetail> ListJobPosting:: showJobPosting(int* const ssn, vector<JobPosting> jobPostings) {
    vector<JobDetail> Details;
    for (auto& posting : jobPostings)
    {
        if (ssn == posting.getJobPostingssn())
        {
            Details.push_back(posting.getJobPostingDetail());
        }
    }
    return Details;
}