#include "ListJobPosting.h"
#include "Application.h"
#include "SummingUp.h"

int main()
{
    ofstream writeFile("output.txt");
    writeFile.open("output.txt");
    writeFile.close();

    // 임시 회사 이름
    string company1 = "aaa";
    string company2 = "aaa";
    string company3 = "bbb";


    // 임시 시간 설정
    struct Date deadline1 = { 2024,4,25 }; // 2024년 5월 25일
    struct Date deadline2 = {2024,5,24 }; // 2024년 6월 30일
    struct Date deadline3 = {2024,6,15 }; // 2024년 7월 15일

    struct JobDetail JD1 = { "Software Developer", 5, deadline1 };
    struct JobDetail JD2 = { "Data Scientist", 3, deadline2 };
    struct JobDetail JD3 = { "System Engineer", 10, deadline3 };


    // JobPosting 객체 생성
    JobPosting job1(company1, "qqqq", JD1);
    JobPosting job2(company2, "qqqq", JD2);
    JobPosting job3(company3, "eeee", JD3);

    vector<JobPosting> jobPostings;

    jobPostings.push_back(job1);
    jobPostings.push_back(job2);
    jobPostings.push_back(job3);


    Application App1(job1, "qwer");
    Application App2(job2, "asdf");
    Application App3(job3, "zxcv");
    Application App4(job3, "zxcv");
    Application App5(job2, "zxcv");


    vector<Application> Applications;
    Applications.push_back(App1);
    Applications.push_back(App2);
    Applications.push_back(App3);
    Applications.push_back(App4);
    Applications.push_back(App5);


    ListJobPosting("qqqq", jobPostings);

    cout << "\n\n";

    SummingUp("zxcv", 1, Applications);

}
