#include "Application.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include "User.h"
#include <fstream>
using namespace std;



//apply된거는 status가 1로 되었다 가정.
vector<Application> getApplication(const User& user, const vector<Application>& applications) {
    vector<Application> userApplications;

    for (const Application& application : applications) {
        if (application.getUser().id == user.id && application.getApplicationStatus() == 1) {
            userApplications.push_back(application);
        }
    }

    return userApplications;
}

JobPosting getJobPosting(const Application& application, const vector<JobPosting>& jobPostings) {
    const string* companyName = application.getJobPosting().getJobPostingcname();

    for (const JobPosting& jobPosting : jobPostings) {
        if (*(jobPosting.getJobPostingcname()) == *companyName) {
            return jobPosting;
        }
    }

    return JobPosting(nullptr, nullptr, { "", 0, { 0, 0, 0 } });
}


/*정렬위해 bool로 비교*/

bool compareJobPosting(const JobPosting& a, const JobPosting& b) {
    return *(a.getJobPostingcname()) < *(b.getJobPostingcname());
}

/*정렬 여기서 getJobposting이랑 getApplication 함수 같이 사용하여 연결. */

void showSortedApplication(const User& user, const vector<Application>& applications, const vector<JobPosting>& jobPostings) {
    vector<Application> userApplications = getApplication(user, applications);
    vector<JobPosting> sortedJobPostings;

    for (const Application& application : userApplications) {
        JobPosting jobPosting = getJobPosting(application, jobPostings);
        sortedJobPostings.push_back(jobPosting);
    }

    sort(sortedJobPostings.begin(), sortedJobPostings.end(), compareJobPosting);

    ofstream outputFile("output.txt");
    if (outputFile.is_open()) {
        for (const JobPosting& job : sortedJobPostings) {
            JobDetail detail = job.getJobPostingDetail();
            outputFile << *(job.getJobPostingcname()) <<*(job.getJobPostingssn()) << " " << detail.JobTitle << " " << detail.applicantLimit << " " << detail.deadline.year << "/" << detail.deadline.month << "/" << detail.deadline.day << endl; //사업자 번호 추가
        }
        outputFile.close();
    }
    else {
        cout << "파일을 열 수 없습니다." << endl;
    }
}