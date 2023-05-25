#include <string>
#include <vector>
#include "JobPosting.h"
#include "ListJobPostingUI.h"

using namespace std;

// 채용정보를 조회하기 위한 ListJobPosting 클래스 정의
class ListJobPosting {
private:

public:
    ListJobPosting(string  ssn, vector<JobPosting> jobPostings);
};