#include <iostream>
#include <vector>
#include "JobPosting.h"
class AddJobPostingUI
{
private:

public:
    AddJobPostingUI();
    JobDetail startinterface(ifstream& inputFile);
    void showresult(JobDetail jd);
};
