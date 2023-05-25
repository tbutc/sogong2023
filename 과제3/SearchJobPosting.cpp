#include <vector>
#include <iostream>
#include "JobPosting.h"
#include "SearchJobPosting.h"
#include "SearchJobPostingUI.h"
using namespace std;

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





