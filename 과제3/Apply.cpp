#include "Apply.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include "JobPosting.h"
#include "ApplyUI.h"
#include "Application.h"
using namespace std;




Application* Apply::start(string id, ifstream& inputFile, vector<JobPosting> * jobPostings) {
    
    ApplyUI a;
    string ssn = a.showInterface(inputFile);

    //매칭 잡포스팅 찾기
    JobPosting* matching_posting = nullptr; // 일치하는 채용정보를 저장할 포인터

    for (auto& posting : *jobPostings) {
        if (posting.getJobPostingssn() == ssn) {
            matching_posting = &posting; // 일치하는 채용정보를 matching_posting에 저장
            break; // 일치하는 정보를 찾았으므로 반복문 종료
        }
    }

    Application * newApp = new Application(*matching_posting, id);
    
    return newApp;
}
