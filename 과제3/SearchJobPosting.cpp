#include "SearchJobPosting.h"
#include <vector>
#include <iostream>

using namespace std;


void SearchJobPosting::getJobPostingdetail() {}

vector<JobDetail> SearchJobPosting::start(string ssn, vector<JobPosting> jobPostings) {
    vector<JobDetail> Details;
    SearchJobPostingUI searchUI; // SearchJobPostingUI 객체 생성

    for (auto& posting : jobPostings) {
        if (ssn == posting.getJobPostingssn()) {
            JobDetail detail;
            detail.JobTitle = posting.getJobPostingDetail().JobTitle;
            detail.applicantLimit = posting.getJobPostingDetail().applicantLimit;
            detail.deadline = posting.getJobPostingDetail().deadline;
            Details.push_back(detail);
        }
    }

    searchUI.startInterface(Details); // SearchJobPostingUI 객체의 startInterface 함수 호출
    return Details;
}
