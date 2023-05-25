#include "AddJobPostingUI.h"
#include "AddJobPosting.h"
#include <vector>
#include "JobPosting.h"
#include <iostream>

using namespace std;


AddJobPostingUI::AddJobPostingUI() {}

void AddJobPostingUI::startinterface(string* const cn, vector<JobPosting> jobPostings)
{
    AddJobPosting addjobposting;

    vector<JobDetail> details = addjobposting.showJobPosting(cn, jobPostings);

    cout << "3.1. 채용 정보 등록 \n> ";

    for (auto& detail : details)
    {
        cout << detail.JobTitle << " " << detail.applicantLimit << " " << detail.deadline.year << "/" << detail.deadline.month << "/" << detail.deadline.day << "\n  ";
    }

}

