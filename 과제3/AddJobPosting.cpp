#include "AddJobPosting.h"
#include "AddJobPostingUI.h"

AddJobPosting::AddJobPosting() {}

vector < JobDetail> AddJobPosting::start(string  ssn, vector<JobPosting> jobPostings) {
    vector<JobDetail> Details;
    for (auto posting : jobPostings)
    {
        if (ssn == posting.getJobPostingssn())
        {
            Details.push_back(posting.getJobPostingDetail());
        }
    }
    AddJobPostingUI().showInterface(Details);
}
