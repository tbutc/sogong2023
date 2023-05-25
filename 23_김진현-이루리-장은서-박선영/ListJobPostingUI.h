#include <iostream>
#include <fstream>
#include <vector>
#include "JobPosting.h"
using namespace std;

// 채용정보를 조회하기 위한 ListJobPostingUI 클래스 정의
class ListJobPostingUI {
private:

public:
    void startinterface(vector<JobDetail> details);
};
