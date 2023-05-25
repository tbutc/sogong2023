#include <cstdio>
#include <vector>
#include "Application.h"
#pragma once
#include <ctime>

using namespace std;

class Apply
{
public:
    Application* start(string id, ifstream& inputFile, vector<JobPosting> * jobPostings);
};
