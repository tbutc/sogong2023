#include "ListJobPostingUI.h"
#include <fstream>

ListJobPostingUI::ListJobPostingUI() {}

void ListJobPostingUI::startinterface(vector<JobDetail> details)
{
    ofstream writeFile;
    writeFile.open("a.txt");
    string str = "3.2.등록된 채용 정보 조회 \n> ";
    writeFile.write(str.c_str(), str.size());


	ListJobPosting listjobposting;

    cout << "3.2.등록된 채용 정보 조회 \n> ";




    for (auto detail : details)
    {
        cout << detail.JobTitle << " " << detail.applicantLimit << " " << detail.deadline.year << "/" << detail.deadline.month << "/" << detail.deadline.day << "\n  ";
    }

}
