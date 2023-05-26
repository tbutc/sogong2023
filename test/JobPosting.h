#pragma once
#include <string>
#include <ctime>

using namespace std;

//JobDetail 구조체 정의
struct JobDetail {
    string JobTitle;
    int applicantLimit;
    string deadline;
};

// 채용정보를 저장하기 위한 JobPosting 클래스 정의
class JobPosting {
private:
    string companyname;
    string id;
    string ssn;
    struct JobDetail jobdetail;

public:
    JobPosting(string cn, string id, string ssn, JobDetail jd);
    string getJobPostingcname();
    string getJobPostingid();
    string getJobPostingssn();
    JobDetail getJobPostingDetail() ;
};
