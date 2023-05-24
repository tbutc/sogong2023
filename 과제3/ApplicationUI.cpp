#include "ApplicationStatusUI.h"
#include <vector>
#include <algorithm>
#include <iostream>
#include "User.h"
#include <fstream>
#include "Application.h"

using namespace std;

void showSortedApplication(const User& user, const vector<Application>& applications, const vector<JobPosting>& jobPostings);

void startInterface(const User& user, const vector<Application>& applications, const vector<JobPosting>& jobPostings) {
    showSortedApplication(user, applications, jobPostings);
}