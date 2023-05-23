#include "JobPosting.h"

JobPosting::JobPosting(string* const cn, JobDetail jd)
    : companyname(cn)
{
    jobdetail.JobTitle = jd.JobTitle;
    jobdetail.applicantLimit = jd.applicantLimit;
    jobdetail.deadline = jd.deadline;
}


const string* JobPosting:: getJobPostingcname() const{
    return companyname;
}

JobDetail JobPosting:: getJobPostingDetail() const{
    // Implementation here
    return jobdetail;
}
