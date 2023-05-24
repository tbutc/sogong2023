#pragma once
#include "ListJobPosting.h"
#include "JobPosting.h"
#include <iostream>

using namespace std;

class AddJobPostingUI {
private:


public:
    AddJobPostingUI();
    void startinterface(string* const cn, vector<JobPosting> jobPostings);
};
