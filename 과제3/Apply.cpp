#include "Apply.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;


vector<Application> Apply::start(string ssn, vector<JobPosting> jobPostings) {
    vector<Application> applications;
    for (auto& posting : jobPostings) {
        if (ssn == posting.getJobPostingssn()) {
            string companyName = posting.getJobPostingcname();
            string registrationNumber = posting.getJobPostingssn();
            string jobTitle = posting.getJobPostingDetail().JobTitle;
            int applicantLimit = posting.getJobPostingDetail().applicantLimit;
            Date deadline = posting.getJobPostingDetail().deadline;

            Application application(companyName, registrationNumber, jobTitle, applicantLimit, deadline);
            applications.push_back(application);
        }
    }
    return applications;
}