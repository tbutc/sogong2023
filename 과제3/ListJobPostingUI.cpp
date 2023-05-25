#include "ListJobPostingUI.h"

ListJobPostingUI::ListJobPostingUI() {}

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

        writeFile << detail.JobTitle << " " << detail.applicantLimit << " " << detail.deadline.year << "/" << detail.deadline.month << "/" << detail.deadline.day;

        isFirst = false;
    }

    writeFile.close();

}
