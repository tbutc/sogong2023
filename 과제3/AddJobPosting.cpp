?#include "AddJobPosting.h"


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
    AddJobPostingUI().startinterface(Details);
}
/*
#include "AddJobPosting.h"

AddJobPosting::AddJobPosting() {}

void AddJobPosting::createJobPosting(const std::string& jobTitle, const int applicantLimit, const Date& deadline, JobPosting& jobPosting) {
    JobDetail jobDetail;
    jobDetail.JobTitle = jobTitle;
    jobDetail.applicantLimit = applicantLimit;
    jobDetail.deadline = deadline;

    jobPosting = JobPosting("", "", jobDetail);
}
*/