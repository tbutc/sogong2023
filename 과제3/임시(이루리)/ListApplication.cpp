#include "ListApplication.h"
#include <iostream>
#include <fstream>
#include <algorithm>


ListApplication::ListApplication() {}

ListApplication::ListApplication(vector<Application> applications)
{
    vector<Application> sortedApplications = applications;
    sort(sortedApplications.begin(), sortedApplications.end(), ListApplication::compareByCompanyName);
    ApplyUI().showSortedApplications(sortedApplications);
}


bool ListApplication::compareByCompanyName(Application a, Application b) {
    return a.getJobPosting().getJobPostingcname() < b.getJobPosting().getJobPostingcname();
}

/*
void ListApplication::cancelApplication(string ssn, vector<Application> applications) {
    for (auto it = applications.begin(); it != applications.end(); ++it) {
        if (it->getRegistrationNumber() == ssn) {
            // Ãë¼ÒµÈ Áö¿ø Á¤º¸ Ãâ·Â
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
*/