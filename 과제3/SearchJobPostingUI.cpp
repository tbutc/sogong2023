#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>

#include "SearchJobPostingUI.h"
#include "SearchJobPosting.h"
#include "JobPosting.h"

using namespace std;

void SearchJobPostingUI::startinterface(string* const cn, vector<JobPosting> jobPostings)
{
    SearchJobPosting searchjobposting;
    vector<JobDetail> details = searchjobposting.showJobPosting(cn, jobPostings);

    cout << "4.1. 채용 정보 검색 \n> ";

    for (auto& detail : details)
    {
        cout << detail.JobTitle << " " << detail.applicantLimit << " " << detail.deadline.year << "/" << detail.deadline.month << "/" << detail.deadline.day << "\n  ";
    }

}//3.2에 회사 이름이랑 사업자 번호 추가한거여서 JOBPOSTING에 회사이름, 사업자번호 추가해서 ㅏㅎ면 되지않을까


void SearchJobPostingUI::searchJobPosting() {
    searchJobPosting a;
    a.showResult();
}