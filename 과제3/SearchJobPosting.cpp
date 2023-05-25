#include "SearchJobPosting.h"
#include <vector>
#include <iostream>
#include "JobPosting.h"
using namespace std;

/*
    함수 이름 : ListJobPostingUI::startinterface()
    기능     : 채용정보조회 UI를 표시하는 함수
    전달 인자 : details -> 채용세부정보 집합
    반환값    : 없음
*/

void SearchJobPosting::getJobPostingdetail() {}
/*
vector<JobPosting> SearchJobPosting::start(string cn, vector<JobPosting> jobPostings) {
    vector<JobPosting> Details;
    SearchJobPostingUI searchUI; // SearchJobPostingUI 객체 생성

    for (auto& posting : jobPostings) {
        if (cn == posting.getJobPostingcname()) {
            JobPosting detail;
            detail.companyname = posting.getJobPostingcname();
            detail.ssn = posting.getJobPostingssn();
            detail.JobTitle = posting.getJobPostingDetail().JobTitle;
            detail.applicantLimit = posting.getJobPostingDetail().applicantLimit;
            detail.deadline = posting.getJobPostingDetail().deadline;
            Details.push_back(detail);
        }
    }

    searchUI.startInterface(Details); // SearchJobPostingUI 객체의 startInterface 함수 호출
    return Details;
}*/

vector<JobPosting> SearchJobPosting::JobPostingdetail(string cn, vector<JobPosting> jobPostings) {
    vector<JobPosting> Details;
    /* SearchJobPostingUI searchUI; // SearchJobPostingUI 객체 생성

    for (auto& posting : jobPostings) {
        if (cn == posting.getJobPostingcname()) {
            JobPosting detail(posting.getJobPostingcname(),  posting.getJobPostingssn(), posting.getJobPostingDetail().JobTitle, posting.getJobPostingDetail().applicantLimit, posting.getJobPostingDetail().deadline);
            Details.push_back(detail);
        }
    }

    searchUI.startInterface(Details); // SearchJobPostingUI 객체의 startInterface 함수 호출
    return Details;*/
    vector<JobPosting> tempDetails; // 일치하는 요소를 임시로 저장할 벡터

    for (const auto& posting : jobPostings) {
        if (cn == posting.getJobPostingcname()) {
            JobPosting detail(posting.getJobPostingcname(), posting.getJobPostingssn(), posting.getJobPostingDetail().JobTitle, posting.getJobPostingDetail().applicantLimit, posting.getJobPostingDetail().deadline);
            tempDetails.push_back(detail);
        }
    }

    // 일괄적으로 원래 벡터에 추가
    Details.insert(Details.end(), tempDetails.begin(), tempDetails.end());
}







