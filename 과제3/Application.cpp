#include <iostream>
using namespace std;
#include <vector>
//[회사이름] [사업자번호] [업무]
#include "Application.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include "User.h"
#include <fstream>


Application::Application(JobPosting jp, string id) :
    applicationRecord(jp), ID(id)
{

}

JobPosting Application::getJobPosting() {
    return applicationRecord;
}


/*
/정렬위해 bool로 비교/
bool compareJobPosting( JobPosting a,  JobPosting b) {
    return (a.getJobPostingcname()) < (b.getJobPostingcname());
}
/정렬 여기서 getJobposting이랑 getApplication 함수 같이 사용하여 연결. /
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
            outputFile << (job.getJobPostingcname()) << " " << detail.JobTitle << " " << detail.applicantLimit << " " << detail.deadline.year << "/" << detail.deadline.month << "/" << detail.deadline.day << endl; //사업자 번호 추가
        }
        outputFile.close();
    }
    else {
        cout << "파일을 열 수 없습니다." << endl;
    }
}
*/
