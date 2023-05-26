#include "ListJobPostingUI.h"
#include <fstream>

/*
    함수 이름 : ListJobPostingUI::startinterface()
    기능	  : 채용정보조회 UI를 표시하는 함수
    전달 인자 : details -> 채용세부정보 집합
    반환값    : 없음
*/
void ListJobPostingUI::startinterface(vector<JobDetail> details)
{
    ofstream outputFile("output.txt", ios::app);
    outputFile << "3.2.등록된 채용 정보 조회 \n> ";

    bool isFirst = true;

    for (auto detail : details)
    {
        if (!isFirst)
        {
            outputFile << "   ";
        }
        outputFile << detail.JobTitle << " " << detail.applicantLimit << " " << detail.deadline << "\n";

        isFirst = false;
    }

    outputFile.close();

}
