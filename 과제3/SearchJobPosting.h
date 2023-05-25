#include <string>
#include <vector>
#include "JobPosting.h"
#include "SearchJobPostingUI.h"


using namespace std;

class SearchJobPosting
{
public:
    void searchpost(ifstream& inputFile, vector <JobPosting>* jobpostings);
}; 