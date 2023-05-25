#include "ListApplication.h"
#include <iostream>
#include <fstream>
#include <algorithm>
#include "ApplicationUI.h"

/*
    ListApplication 클래스의 기본 생성자
*/
ListApplication::ListApplication() {}

/*
    함수 이름: ListApplication::ListApplication
    기능: ListApplication 객체를 생성, 지원 정보들을 정렬하여 출력
    전달 인자: applications: 지원 정보들의 벡터
    반환값: 없음
*/
ListApplication::ListApplication(vector<Application> &applications)
{
    vector<Application> sortedApplications = applications;
    sort(sortedApplications.begin(), sortedApplications.end(), ListApplication::compareByCompanyName);
    ApplicationUI().showSortedApplications(sortedApplications);
}

/*
    함수 이름: ListApplication::compareByCompanyName
    기능: 회사 이름을 기준으로(오름차순) Application 객체들을 비교
    전달 인자: a, b (비교할 Application 객체들)
    반환값: 회사 이름을 비교 결과에 따라 true/false반환
*/
bool ListApplication::compareByCompanyName(Application a, Application b) {
    return a.getJobPosting().getJobPostingcname() < b.getJobPosting().getJobPostingcname();
}

/*
    함수 이름: ListApplication::cancelApplication
    기능: 특정 지원 정보를 취소하고 출력을 위해 관련 정보 저장.
    전달 인자: ssn, applications
    반환값: 없음
*/
void ListApplication::cancelApplication(string ssn, vector<Application> applications) {
    for (auto it = applications.begin(); it != applications.end(); ++it) {
        if (it->getJobPosting().getJobPostingssn() == ssn) {
            ofstream outputFile("output.txt", ios::app);
            outputFile << it->getJobPosting().getJobPostingcname() << " ";
            outputFile << it->getJobPosting().getJobPostingssn() << " ";
            outputFile << it->getJobPosting().getJobPostingDetail().JobTitle << " \n";
            outputFile.close();

            applications.erase(it);
            break;
        }
    }
}
