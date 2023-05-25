#include "Apply.h"
#include <vector>
#include "JobPosting.h"
#include <iostream>
#include <fstream>
#include "Application.h"
#include "ApplyInfo.h"
#include <algorithm>
using namespace std;


class Application {
private:
    string companyName;
    string registrationNumber;
    string jobTitle;
    int applicantLimit;
    Date deadline;
public:
    Application(const std::string& cn, const std::string& rn, const std::string& jt, int & al, const Date& dl)
        : companyName(cn), registrationNumber(rn), jobTitle(jt), applicantLimit(al), deadline(dl) {}

    string getCompanyName() const {
        return companyName;
    }

    string getRegistrationNumber() const {
        return registrationNumber;
    }

    string getJobTitle() const {
        return jobTitle;
    }

    int getApplicantLimit() const {
        return applicantLimit;
    }

    Date getDeadline() const {
        return deadline;
    }
};


vector<ApplyInfo> Apply::start(string ssn, vector<JobPosting> jobPostings) {
    vector<ApplyInfo> applications;
    for (auto& posting : jobPostings) {
        if (ssn == posting.getJobPostingssn()) {
            string companyName = posting.getJobPostingcname();
            string registrationNumber = posting.getJobPostingssn();
            string jobTitle = posting.getJobPostingDetail().JobTitle;
            int applicantLimit = posting.getJobPostingDetail().applicantLimit;
            Date deadline = posting.getJobPostingDetail().deadline;

            ApplyInfo newApplyInfo(companyName, registrationNumber, jobTitle, applicantLimit, deadline);
            applications.push_back(newApplyInfo);
        }
    }
    return applications;
}

bool compareByCompanyName(const ApplyInfo& a, const ApplyInfo& b) {
    return a.getCompanyName() < b.getCompanyName();
}

vector<ApplyInfo> Apply::sortApplicationsByCompanyName(const vector<ApplyInfo>& applications) {
    vector<ApplyInfo> sortedApplications = applications;
    sort(sortedApplications.begin(), sortedApplications.end(), compareByCompanyName);
    return sortedApplications;
}






 
 // 받은 변수랑 사업자번호 비교하는 코드






