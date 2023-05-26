#pragma once
#include "AddJobPosting.h"
#include "AddJobPostingUI.h"
#include "JobPosting.h"

/*
    함수 이름 : AddJobPosting::AddJobPosting()
    기능     : 채용정보등록 기능을 수행하는 생성자
    전달 인자 : inputFile, cn, id, ssn, jobPostings -> input파일, 회사이름, id, ssn, 채용정보집합
    반환값    : 없음
*/
AddJobPosting::AddJobPosting(ifstream& inputFile, string cn, string id, string ssn, vector<JobPosting>& jobPostings)
{
    JobDetail jobdetail = AddJobPostingUI().startinterface(inputFile);
    Add(cn, id, ssn, jobPostings, jobdetail);
    AddJobPostingUI().showresult(jobdetail);
}

/*
함수 이름: AddJobPosting::Add
기능: 새로운 채용 정보를 추가하는 함수
전달 인자: cn, id, ssn, jobPostings, jd -> 회사이름, ID, 사업자번호, 채용정보집합 , Jobdetail
반환값: 없음
*/


void AddJobPosting::Add(string cn, string id, string ssn, vector<JobPosting>& jobPostings, JobDetail jd) 
{
    JobPosting jobposting(cn, id, ssn, jd);
    jobPostings.push_back(jobposting);
}

