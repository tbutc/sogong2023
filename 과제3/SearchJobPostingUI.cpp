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

    cout << "4.1. ä�� ���� �˻� \n> ";

    for (auto& detail : details)
    {
        cout << detail.JobTitle << " " << detail.applicantLimit << " " << detail.deadline.year << "/" << detail.deadline.month << "/" << detail.deadline.day << "\n  ";
    }

}//3.2�� ȸ�� �̸��̶� ����� ��ȣ �߰��Ѱſ��� JOBPOSTING�� ȸ���̸�, ����ڹ�ȣ �߰��ؼ� ������ ����������


void SearchJobPostingUI::searchJobPosting() {
    searchJobPosting a;
    a.showResult();
}