#pragma once
#include "AddJobPosting.h"
#include "AddJobPostingUI.h"
#include "JobPosting.h"

/*
    �Լ� �̸� : AddJobPostingUI::startinterface()
    ���     : ä��������ȸ UI�� ǥ���ϴ� �Լ�
    ���� ���� : details -> ä�뼼������ ����
    ��ȯ��    : ����
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

