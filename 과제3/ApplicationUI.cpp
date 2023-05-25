#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>
#include <vector>
#include "ApplicationUI.h"
#include "ListApplication.h"

void ApplicationUI::showSortedApplications(vector<Application> sortedApplications) {
    ofstream outputFile("output.txt", std::ios::app);
    outputFile << "\n4.3 지원정보 조회:\n";

    for (auto application : sortedApplications) {
        outputFile << application.getJobPosting().getJobPostingcname();

        outputFile << " ";


        outputFile << application.getJobPosting().getJobPostingssn();
        outputFile << " ";

        outputFile << application.getJobPosting().getJobPostingDetail().JobTitle;
        outputFile << " ";

        outputFile << application.getJobPosting().getJobPostingDetail().applicantLimit;
        outputFile << " ";

        outputFile << application.getJobPosting().getJobPostingDetail().deadline.year, "/";
        outputFile << " ";
        outputFile << application.getJobPosting().getJobPostingDetail().deadline.month, "/";
        outputFile << " ";
        outputFile << application.getJobPosting().getJobPostingDetail().deadline.day, "/";
        outputFile << " \n";
    }
    outputFile.close();
}

void ApplicationUI::PrintcancelApplication(string ssn, vector<Application> applications) {
    ListApplication apply;
    apply.cancelApplication(ssn, applications);
}
