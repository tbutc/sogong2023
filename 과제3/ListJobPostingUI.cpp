#include "ListJobPostingUI.h"

/*
    함수 이름 : ListJobPostingUI::startinterface()
    기능	  : 채용정보조회 UI를 표시하는 함수
    전달 인자 : details -> 채용세부정보 집합
    반환값    : 없음
*/
void ListJobPostingUI::startinterface(vector<JobDetail> details)
{
    ofstream writeFile("output.txt", std::ios::app);
    writeFile << "3.2.등록된 채용 정보 조회 \n> ";

    bool isFirst = true;

    for (auto detail : details)
    {
        if (!isFirst)
        {
            writeFile << "\n   ";
        }

        writeFile << detail.JobTitle << " " << detail.applicantLimit << " " << detail.deadline;

        isFirst = false;
    }

    writeFile.close();

}
