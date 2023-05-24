#include "JobPosting.h"

JobPosting::JobPosting(string cn, string ssn, JobDetail jd)
    : companyname(cn), ssn(ssn)
{
    jobdetail.JobTitle = jd.JobTitle;
    jobdetail.applicantLimit = jd.applicantLimit;
    jobdetail.deadline = jd.deadline;
}


 string JobPosting:: getJobPostingcname() {
    return companyname;
}

 string JobPosting:: getJobPostingssn() {
    return ssn;
}

JobDetail JobPosting:: getJobPostingDetail() {
    return jobdetail;
}
