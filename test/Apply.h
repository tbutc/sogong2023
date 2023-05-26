#include <cstdio>
#include <vector>
#include "Application.h"
#pragma once
#include <ctime>

using namespace std;
// 채용지원을 위한 Apply class 정의
class Apply
{
public:
    Application* start(string id, ifstream& inputFile, vector<JobPosting> * jobPostings);
};
