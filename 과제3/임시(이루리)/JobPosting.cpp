#include "JobPosting.h"

JobPosting::JobPosting(string cn, string id, string ssn, JobDetail jd)
    : companyname(cn), id(id), ssn(ssn)
{
    jobdetail.JobTitle = jd.JobTitle;
    jobdetail.applicantLimit = jd.applicantLimit;
    jobdetail.deadline = jd.deadline;
}


 string JobPosting:: getJobPostingcname() {
    return companyname;
}

 string JobPosting::getJobPostingid() {
     return id;
 }

 string JobPosting:: getJobPostingssn() {
    return ssn;
}

JobDetail JobPosting:: getJobPostingDetail() {
    return jobdetail;
}
