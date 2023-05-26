#include <iostream>
#include <vector>
#include "JobPosting.h"
// 채용정보를 등록하기 위한 AddJobPostingUI 클래스 정의
class AddJobPostingUI
{
private:

public:
    AddJobPostingUI();
    JobDetail startinterface(ifstream& inputFile);
    void showresult(JobDetail jd);
};
