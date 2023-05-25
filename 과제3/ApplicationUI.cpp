#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>
#include <vector>
#include "ApplicationUI.h"
#include "ListApplication.h"
/* 
    함수 이름: ApplicationUI::showSortedApplications
    기능: 정렬된 지원 정보를 출력.
    전달 인자: sortedApplications (정렬된 Application 객체들의 벡터)
    반환값: 없음
*/
void ApplicationUI::showSortedApplications(vector<Application> sortedApplications) {
    ofstream outputFile("output.txt", std::ios::app);
    outputFile << "\n4.3 지원정보 조회:\n";

    for (auto& application : sortedApplications) {
        outputFile << application.getJobPosting().getJobPostingcname();

        outputFile << " ";


        outputFile << application.getJobPosting().getJobPostingssn();
        outputFile << " ";

        outputFile << application.getJobPosting().getJobPostingDetail().JobTitle;
        outputFile << " ";

        outputFile << application.getJobPosting().getJobPostingDetail().applicantLimit;
        outputFile << " ";

        outputFile << application.getJobPosting().getJobPostingDetail().deadline;
        outputFile << "\n";

    }
    outputFile.close();
}
/*
    함수 이름: ApplicationUI::PrintcancelApplication
    기능: 검색된 ssn(사업자 번호)에 대힌 지원 정보를 취소
    전달 인자: ssn, applications: 
    반환값: 없음  
*/
void ApplicationUI::PrintcancelApplication(string ssn, vector<Application> applications) {
    ListApplication apply;
    apply.cancelApplication(ssn, applications);
}
