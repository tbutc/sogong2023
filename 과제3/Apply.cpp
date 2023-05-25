#include "Apply.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include "JobPosting.h"
#include "ApplyUI.h"
#include "Application.h"
using namespace std;

/*
함수 이름: Apply::start
기능: 지원 작성 및 생성을 처리하는 함수
전달 인자:id, inputFile, jobPostings -> ID, ifstream객체, JobPosting 벡터의 포인터
반환값: Application* -> 생성된 지원서 객체의 포인터
*/


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
