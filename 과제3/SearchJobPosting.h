#include <string>
#include <vector>
#include "JobPosting.h"
#include "SearchJobPostingUI.h"

// 채용정보를 검색하기 위한 SearchJobPosting 클래스 정의
using namespace std;

class SearchJobPosting
{
public:
    void searchpost(ifstream& inputFile, vector <JobPosting>* jobpostings);
}; 
