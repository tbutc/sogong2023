#include "Application.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include "User.h"
#include <fstream>


Application::Application(JobPosting jp, string ssn) :
    applicationRecord(jp), SSN(ssn)
{

}

JobPosting Application:: getJobPosting() {
    return applicationRecord;
}


/*
/�������� bool�� ��/

bool compareJobPosting( JobPosting a,  JobPosting b) {
    return (a.getJobPostingcname()) < (b.getJobPostingcname());
}

/���� ���⼭ getJobposting�̶� getApplication �Լ� ���� ����Ͽ� ����. /

void showSortedApplication( User user,  vector<Application> applications,  vector<JobPosting> jobPostings) {
    vector<Application> userApplications = getApplication(user, applications);
    vector<JobPosting> sortedJobPostings;

    for ( Application application : userApplications) {
        JobPosting jobPosting = getJobPosting(application, jobPostings);
        sortedJobPostings.push_back(jobPosting);
    }

    sort(sortedJobPostings.begin(), sortedJobPostings.end(), compareJobPosting);

    ofstream outputFile("output.txt");
    if (outputFile.is_open()) {
        for ( JobPosting job : sortedJobPostings) {
            JobDetail detail = job.getJobPostingDetail();
            outputFile << (job.getJobPostingcname()) << " " << detail.JobTitle << " " << detail.applicantLimit << " " << detail.deadline.year << "/" << detail.deadline.month << "/" << detail.deadline.day << endl; //����� ��ȣ �߰�
        }
        outputFile.close();
    }
    else {
        cout << "������ �� �� �����ϴ�." << endl;
    }
}

*/