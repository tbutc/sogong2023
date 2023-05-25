#include "SearchJobPosting.h"
#include <vector>
#include <iostream>
#include "JobPosting.h"
using namespace std;

/*
    �Լ� �̸� : ListJobPostingUI::startinterface()
    ���     : ä��������ȸ UI�� ǥ���ϴ� �Լ�
    ���� ���� : details -> ä�뼼������ ����
    ��ȯ��    : ����
*/

void SearchJobPosting::getJobPostingdetail() {}
/*
vector<JobPosting> SearchJobPosting::start(string cn, vector<JobPosting> jobPostings) {
    vector<JobPosting> Details;
    SearchJobPostingUI searchUI; // SearchJobPostingUI ��ü ����

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

    searchUI.startInterface(Details); // SearchJobPostingUI ��ü�� startInterface �Լ� ȣ��
    return Details;
}*/

vector<JobPosting> SearchJobPosting::JobPostingdetail(string cn, vector<JobPosting> jobPostings) {
    vector<JobPosting> Details;
    /* SearchJobPostingUI searchUI; // SearchJobPostingUI ��ü ����

    for (auto& posting : jobPostings) {
        if (cn == posting.getJobPostingcname()) {
            JobPosting detail(posting.getJobPostingcname(),  posting.getJobPostingssn(), posting.getJobPostingDetail().JobTitle, posting.getJobPostingDetail().applicantLimit, posting.getJobPostingDetail().deadline);
            Details.push_back(detail);
        }
    }

    searchUI.startInterface(Details); // SearchJobPostingUI ��ü�� startInterface �Լ� ȣ��
    return Details;*/
    vector<JobPosting> tempDetails; // ��ġ�ϴ� ��Ҹ� �ӽ÷� ������ ����

    for (const auto& posting : jobPostings) {
        if (cn == posting.getJobPostingcname()) {
            JobPosting detail(posting.getJobPostingcname(), posting.getJobPostingssn(), posting.getJobPostingDetail().JobTitle, posting.getJobPostingDetail().applicantLimit, posting.getJobPostingDetail().deadline);
            tempDetails.push_back(detail);
        }
    }

    // �ϰ������� ���� ���Ϳ� �߰�
    Details.insert(Details.end(), tempDetails.begin(), tempDetails.end());
}







