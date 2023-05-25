
#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include "JobPosting.h"
#include "ApplyInfo.h"

using namespace std;

class Apply
{
public:
    vector<ApplyInfo> start(string ssn, vector<JobPosting> jobPostings);
    vector<ApplyInfo> sortApplicationsByCompanyName(const vector<ApplyInfo>& applications);

};

 