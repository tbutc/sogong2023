#include "Apply.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;


/*
    함수 이름 : Apply::start
    기능	  : 사업자 번호와 채용 정보 목록을 전달받아 일치하는 채용 정보에 대한 지원정보값을 반환
    전달 인자 : ssn, jobPosting
    반환값    : Application 객체의 벡터 (vector<Application> applications)
*/
vector<Application> Apply::start(string ssn, vector<JobPosting> jobPostings) {
    vector<Application> applications;
    for (auto& posting : jobPostings) {
        if (ssn == posting.getJobPostingssn()) {
            string companyName = posting.getJobPostingcname();
            string registrationNumber = posting.getJobPostingssn();
            string jobTitle = posting.getJobPostingDetail().JobTitle;
            int applicantLimit = posting.getJobPostingDetail().applicantLimit;
            string deadline = posting.getJobPostingDetail().deadline;

            Application application(posting, ssn);
            applications.push_back(application);
        }
    }
    return applications;
}
