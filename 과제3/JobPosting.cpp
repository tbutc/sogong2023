#include "JobPosting.h"

/*
    함수 이름 : JobPosting::JobPosting()
    기능	  : 입력받은 값에 따라 채용정보를 생성하는 생성자
    전달 인자 : cn, id, ssn, jd -> 회사이름,ID, SSN, 채용세부정보
    반환값    : 없음
*/
JobPosting::JobPosting(string cn, string id, string ssn, JobDetail jd)
    : companyname(cn), id(id), ssn(ssn)
{
    jobdetail.JobTitle = jd.JobTitle;
    jobdetail.applicantLimit = jd.applicantLimit;
    jobdetail.deadline = jd.deadline;
}

/*
    함수 이름 : JobPosting::getJobPostingcname()
    기능	  : 회사이름을 반환하는 getter 함수
    전달 인자 : 없음
    반환값    : companyname -> 회사이름
*/
 string JobPosting:: getJobPostingcname() {
    return companyname;
}

/*
    함수 이름 : JobPosting::getJobPostingid()
    기능	  : ID를 반환하는 getter 함수
    전달 인자 : 없음
    반환값    : id -> ID
*/
 string JobPosting::getJobPostingid() {
     return id;
 }

/*
    함수 이름 : JobPosting::getJobPostingssn()
    기능	  : ssn를 반환하는 getter 함수
    전달 인자 : 없음
    반환값    : ssn -> ssn
*/
 string JobPosting:: getJobPostingssn() {
    return ssn;
}

/*
    함수 이름 : JobPosting::getJobPostingDetail()
    기능	  : ssn를 반환하는 getter 함수
    전달 인자 : 없음
    반환값    : jobdetail -> 채용세부정보(업무,채용인원수,마감기한)
*/
JobDetail JobPosting:: getJobPostingDetail() {
    return jobdetail;
}
