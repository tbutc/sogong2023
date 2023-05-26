#include <string>
#include <vector>
#include "JobPosting.h"

using namespace std;
// 채용정보를 등록하기 위한 AddJobPosting 클래스 정의
class AddJobPosting
{
private:
    void Add(string cn, string id, string ssn, vector<JobPosting>& jobPostings, JobDetail jd);
public:
    AddJobPosting(ifstream& inputFile, string cn, string id, string ssn, vector<JobPosting>& jobPostings);
};
