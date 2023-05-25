#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>
#include <vector>
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

void ApplyUI::showSortedApplications( vector<Application>& sortedApplications) {
    ofstream outputFile("output.txt", ios::app);
    string message = "4.3 지원정보 조회:\n";

    for ( Application& application : sortedApplications) {
        message = application.getCompanyName();
        outputFile << message;
        outputFile << " ";

        message = application.getRegistrationNumber();
        outputFile << message;
        outputFile << " ";

        message = application.getJobTitle();
        outputFile << message;
        outputFile << " ";

        message = application.getApplicantLimit();
        outputFile << message;
        outputFile << " ";

        message = application.getDeadline().year, "-";
        outputFile << message;
        outputFile << " ";
        message = application.getDeadline().month, "-";
        outputFile << message;
        outputFile << " ";
        message = application.getDeadline().day, "-";
        outputFile << message;
        outputFile << " ";
    }
    outputFile.close();
}

void ApplyUI::PrintcancelApplication(string& ssn, vector<Application>& applications) {
    Apply apply;
    apply.cancelApplication(ssn, applications);
}