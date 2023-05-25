#include <vector>
#include <iostream>
#include "JobPosting.h"
#include "SearchJobPosting.h"
#include "SearchJobPostingUI.h"
using namespace std;
/*
함수 이름: SearchJobPosting::searchpost
기능: 주어진 파일에서 채용정보를 검색하고, 일치하는 채용정보를 UI를 통해 표시하는 함수
전달 인자: inputFile, jobpostings -> 채용정보를 검색할 파일에 대한 ifstream 객체, 채용정보가 저장된 벡터에 대한 포인터
반환값: 없음
*/
void SearchJobPosting::searchpost(ifstream& inputFile, vector <JobPosting> * jobpostings) {
	
	SearchJobPostingUI a;
	string cn = a.startInterface(inputFile);

	JobPosting* matching_posting = nullptr; // 일치하는 채용정보를 저장할 포인터

	for (auto& posting : *jobpostings) {
		if (posting.getJobPostingcname() == cn) {
			matching_posting = &posting; // 일치하는 채용정보를 matching_posting에 저장
			break; // 일치하는 사용자를 찾았으므로 반복문 종료
		}
	}

	a.startInterface2(matching_posting);
}





