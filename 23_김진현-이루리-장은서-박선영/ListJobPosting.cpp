#include "ListJobPosting.h"

/*
    함수 이름 : ListJobPosting::ListJobPosting()
    기능	  : 채용정보조회 기능을 수행하는 생성자
    전달 인자 : ssn, jobPostings -> ssn, 채용정보집합
    반환값    : 없음
*/
ListJobPosting::ListJobPosting(string  ssn, vector<JobPosting> jobPostings)
{
    ListJobPostingUI().startinterface(Listing(ssn, jobPostings));
}

/*
    함수 이름 : ListJobPosting::Listing()
    기능	  : 사용자의 채용정보 list를 만드는 함수
    전달 인자 : ssn, jobPostings -> ssn, 채용정보집합
    반환값    : Details
*/
vector<JobDetail> ListJobPosting::Listing(string  ssn, vector<JobPosting> jobPostings)
{
    vector<JobDetail> Details;
    for (auto posting : jobPostings)
    {
        if (ssn == posting.getJobPostingssn())
        {
            Details.push_back(posting.getJobPostingDetail());
        }
    }

    return Details;
}
