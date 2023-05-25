#include <string>
#include <vector>
#include "JobPosting.h"

using namespace std;

class AddJobPosting
{
private:
    void Add(string cn, string id, string ssn, vector<JobPosting>& jobPostings, JobDetail jd);
public:
    AddJobPosting(ifstream& inputFile, string cn, string id, string ssn, vector<JobPosting>& jobPostings);
};
