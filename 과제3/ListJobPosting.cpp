#include "ListJobPosting.h"


ListJobPosting::ListJobPosting() {}

vector< JobDetail> ListJobPosting:: showJobPosting(string* const cn, vector<JobPosting> jobPostings) {
    for (auto& posting : jobPostings)
    {
        if (cn == posting.getJobPostingcname())
        {
            Details.push_back(posting.getJobPostingDetail());
        }
    }
    return Details;
}