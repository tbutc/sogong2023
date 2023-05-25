#pragma once
#include "AddJobPosting.h"
#include "AddJobPostingUI.h"
#include "JobPosting.h"

/*
    함수 이름 : AddJobPostingUI::startinterface()
    기능     : 채용정보조회 UI를 표시하는 함수
    전달 인자 : details -> 채용세부정보 집합
    반환값    : 없음
*/

AddJobPosting::AddJobPosting(string cn, string id, string ssn, JobDetail jd)
    : companyName(cn), jobId(id), jobPostingssn(ssn), jobPostingDetail(jd) {}


vector < JobDetail> AddJobPosting::start(string  ssn, vector<JobPosting> jobPostings) {
    vector<JobDetail> Details;
    for (auto posting : jobPostings)
    {
        if (ssn == posting.getJobPostingssn())
        {
            Details.push_back(posting.getJobPostingDetail());
        }
    }
    AddJobPostingUI().showInterface(Details);
}

