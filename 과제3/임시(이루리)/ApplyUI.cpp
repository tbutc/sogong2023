#include <iostream>
#include <cstdio>
#include <fstream>
#include "ApplyUI.h"

using namespace std;

ApplyUI::ApplyUI() {}

void ApplyUI::showInterface(JobPosting jobposting) {
    ofstream outputFile("output.txt", ios::app);
    string message = "4.2. 채용 지원\n> ";
    outputFile << message;

    message = jobposting.getJobPostingcname();
    outputFile << message;
    outputFile << " ";

    message = jobposting.getJobPostingssn();
    outputFile << message;
    outputFile << " ";

    message = jobposting.getJobPostingDetail().JobTitle;
    outputFile << message;
    outputFile << " \n";

    outputFile.close();

}

void ApplyUI::showSortedApplications( vector<Application> sortedApplications) {
    ofstream outputFile("output.txt", std::ios::app);
    outputFile << "\n4.3 지원정보 조회:\n";

    for ( auto application : sortedApplications) {
        outputFile << application.getJobPosting().getJobPostingcname();




        outputFile << " ";


        outputFile << application.getJobPosting().getJobPostingssn();
        outputFile << " ";

        outputFile << application.getJobPosting().getJobPostingDetail().JobTitle;
        outputFile << " ";

        outputFile << application.getJobPosting().getJobPostingDetail().applicantLimit;
        outputFile << " ";

        outputFile << application.getJobPosting().getJobPostingDetail().deadline.year, "-";
        outputFile << " ";
        outputFile << application.getJobPosting().getJobPostingDetail().deadline.month, "-";
        outputFile << " ";
        outputFile << application.getJobPosting().getJobPostingDetail().deadline.day, "-";
        outputFile << " ";
    }
    outputFile.close();
}

/*
void ApplyUI::PrintcancelApplication(string& ssn, vector<Application>& applications) {
    Apply apply;
    apply.cancelApplication(ssn, applications);
}
*/