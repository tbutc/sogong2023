#include "SearchJobPosting.h"
#include <vector>
#include <iostream>

using namespace std;


void SearchJobPosting::getJobPostingdetail() {}

vector<JobDetail> SearchJobPosting::start(string ssn, vector<JobPosting> jobPostings) {
    vector<JobDetail> Details;
    SearchJobPostingUI searchUI; // SearchJobPostingUI ��ü ����

    for (auto& posting : jobPostings) {
        if (ssn == posting.getJobPostingssn()) {
            JobDetail detail;
            detail.JobTitle = posting.getJobPostingDetail().JobTitle;
            detail.applicantLimit = posting.getJobPostingDetail().applicantLimit;
            detail.deadline = posting.getJobPostingDetail().deadline;
            Details.push_back(detail);
        }
    }

    searchUI.startInterface(Details); // SearchJobPostingUI ��ü�� startInterface �Լ� ȣ��
    return Details;
}
