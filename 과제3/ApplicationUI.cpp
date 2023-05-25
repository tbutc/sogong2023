#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>
#include <vector>
#include "ApplicationUI.h"
#include "ListApplication.h"

void ApplicationUI::showSortedApplications(vector<Application> sortedApplications) {
    ofstream outputFile("output.txt", ios::app);
    string message = "4.3 지원정보 조회:\n";

    for (Application& application : sortedApplications) {
        outputFile << application.getCompanyName();
        outputFile << " ";

        outputFile << application.getRegistrationNumber();
        outputFile << " ";

        message = application.getJobTitle();
        outputFile << message;
        outputFile << " ";

        outputFile << application.getApplicantLimit();
        outputFile << " ";

        outputFile << application.getDeadline().year, "/";
        outputFile << " ";
        outputFile << application.getDeadline().month, "/";
        outputFile << " ";
        outputFile << application.getDeadline().day, "/";
        outputFile << message;
        outputFile << "\n ";
    }
    outputFile.close();
}

void ApplicationUI::PrintcancelApplication(string ssn, vector<Application> applications) {
    ListApplication apply;
    apply.cancelApplication(ssn, applications);
}