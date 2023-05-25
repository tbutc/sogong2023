#include <vector>
#include <iostream>
#include "JobPosting.h"
#include "SearchJobPosting.h"
#include "SearchJobPostingUI.h"
using namespace std;

void SearchJobPosting::searchpost(ifstream& inputFile, vector <JobPosting> * jobpostings) {
	
	SearchJobPostingUI a;
	string cn = a.startInterface(inputFile);

	JobPosting* matching_posting = nullptr; // ��ġ�ϴ� ä�������� ������ ������

	for (auto& posting : *jobpostings) {
		if (posting.getJobPostingcname() == cn) {
			matching_posting = &posting; // ��ġ�ϴ� ä�������� matching_posting�� ����
			break; // ��ġ�ϴ� ����ڸ� ã�����Ƿ� �ݺ��� ����
		}
	}

	a.startInterface2(matching_posting);
}





