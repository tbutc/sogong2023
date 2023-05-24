
#include <string>
#include <vector>
#include "JobPosting.h"

using namespace std;

class AddJobPosting {
private:

public:
    AddJobPosting();
    vector<JobDetail> showJobPosting(string* const cn, vector<JobPosting> jobPostings);
};