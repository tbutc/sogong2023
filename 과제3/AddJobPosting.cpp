#include "AddJobPosting.h"
#include "JobPosting.h"

AddJobPosting::AddJobPosting() {}

vector< JobDetail> AddJobPosting::showJobPosting(string* const cn, vector<JobPosting> jobPostings) {
    vector<JobDetail> Details;
    for (auto& posting : jobPostings)
    {
        if (cn == posting.getJobPostingcname())
        {
            Details.push_back(posting.getJobPostingDetail());
        }
    }
    return Details;
}