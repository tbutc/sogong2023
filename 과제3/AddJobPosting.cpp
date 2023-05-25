#pragma once
#include "AddJobPosting.h"
#include "AddJobPostingUI.h"
#include "JobPosting.h"

/*
    �Լ� �̸� : AddJobPosting::AddJobPosting()
    ���     : ä��������� ����� �����ϴ� ������
    ���� ���� : inputFile, cn, id, ssn, jobPostings -> input����, ȸ���̸�, id, ssn, ä����������
    ��ȯ��    : ����
*/
AddJobPosting::AddJobPosting(ifstream& inputFile, string cn, string id, string ssn, vector<JobPosting>& jobPostings)
{
    JobDetail jobdetail = AddJobPostingUI().startinterface(inputFile);
    Add(cn, id, ssn, jobPostings, jobdetail);
    AddJobPostingUI().showresult(jobdetail);
}



void AddJobPosting::Add(string cn, string id, string ssn, vector<JobPosting>& jobPostings, JobDetail jd) 
{
    JobPosting jobposting(cn, id, ssn, jd);
    jobPostings.push_back(jobposting);
}

