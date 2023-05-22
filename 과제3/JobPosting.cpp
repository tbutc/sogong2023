#include "JobPosting.h"

JobPosting::JobPosting(string* const cn, string jt, int al, struct Date dl)
    : companyname(cn)
{
    jobdetail.JobTitle = jt;
    jobdetail.applicantLimit = al;
    jobdetail.deadline = dl;
}


const string* JobPosting:: getJobPostingcname() const{
    return companyname;
}

JobDetail JobPosting:: getJobPostingDetail() const{
    // Implementation here
    return jobdetail;
}
