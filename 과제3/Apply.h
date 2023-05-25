#include <cstdio>
#include <vector>
#include "Application.h"
#pragma once
#include <ctime>

using namespace std;

class Apply
{
public:
    vector<Application> start(string ssn, vector<JobPosting> jobPostings);
};
