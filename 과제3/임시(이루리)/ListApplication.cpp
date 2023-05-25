#include "ApplicationControl"
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;


bool compareByCompanyName(Application& a, Application& b) {
    return a.getCompanyName() < b.getCompanyName();
}

vector<Application> Apply::sortApplicationsByCompanyName(vector<Application>& applications) {
    vector<Application> sortedApplications = applications;
    sort(sortedApplications.begin(), sortedApplications.end(), compareByCompanyName);
    return sortedApplications;
}

void Apply::cancelApplication(string& ssn, vector<Application>& applications) {
    for (auto it = applications.begin(); it != applications.end(); ++it) {
        if (it->getRegistrationNumber() == ssn) {
            // 취소된 지원 정보 출력
            ofstream outputFile("output.txt", ios::app);
            outputFile << it->getCompanyName() << " ";
            outputFile << it->getRegistrationNumber() << " ";
            outputFile << it->getJobTitle() << " (\n";
            outputFile.close();

            applications.erase(it);
            break;
        }
    }
}