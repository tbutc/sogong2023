#include "ListJobPostingUI.h"

ListJobPostingUI::ListJobPostingUI() {}

void ListJobPostingUI::startinterface(string* const cn, vector<JobPosting> jobPostings)
{
	ListJobPosting listjobposting;
	vector<JobDetail> details = listjobposting.showJobPosting(cn, jobPostings);

    cout << "3.2.ㅇㅇ \n> ";

    for (auto& detail : details)
    {
        cout << detail.JobTitle << " " << detail.applicantLimit << " " << detail.deadline.year << "/" << detail.deadline.month << "/" << detail.deadline.day << "\n  ";
    }

}
