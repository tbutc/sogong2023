#include "JobPosting.h"

JobPosting::JobPosting(string* const cn, int* const ssn, JobDetail jd)
    : companyname(cn), ssn(ssn)
{
    jobdetail.JobTitle = jd.JobTitle;
    jobdetail.applicantLimit = jd.applicantLimit;
    jobdetail.deadline = jd.deadline;
}


const string* JobPosting:: getJobPostingcname() const{
    return companyname;
}

JobDetail JobPosting:: getJobPostingDetail() const{
    return jobdetail;
}
