#include "ListJobPostingUI.h"
#include <fstream>

ListJobPostingUI::ListJobPostingUI() {}

void ListJobPostingUI::startinterface(int* const ssn, vector<JobPosting> jobPostings)
{
    ofstream writeFile;
    writeFile.open("a.txt");
    string str = "3.2.등록된 채용 정보 조회 \n> ";
    writeFile.write(str.c_str(), str.size());


	ListJobPosting listjobposting;
	vector<JobDetail> details = listjobposting.showJobPosting(ssn, jobPostings);

    cout << "3.2.등록된 채용 정보 조회 \n> ";




    for (auto& detail : details)
    {
        cout << detail.JobTitle << " " << detail.applicantLimit << " " << detail.deadline.year << "/" << detail.deadline.month << "/" << detail.deadline.day << "\n  ";
    }

}
