
#include <iostream>
#include <string>
#include <string.h>
#include <cstdio>
#include "JobPosting.h"

using namespace std;

class SearchJobPostingUI
{
public:
    string startInterface(ifstream& inputFile);
    void startInterface2(JobPosting* posting);
};