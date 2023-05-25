#include "SummingUp.h"


/*
	함수 이름 : SummingUp::SummingUp()
	기능	  : 통계출력 기능을 수행하는 생성자
	전달 인자 : id, usertype, Applications -> ID,유저타입, 지원정보
	반환값    : 없음
*/
SummingUp::SummingUp(string id, int usertype, vector<Application> Applications)
{
	SummingUpUI().startinterface(sumup(id, usertype, Applications));
}

/*
	함수 이름 : SummingUp::sumup()
	기능	  : 통계를 생성하는 함수
	전달 인자 : id, usertype, Applications -> ID,유저타입, 지원정보
	반환값    : applicant -> 회사회원이라면 업무별 지원자수, 일반회원이라면 업무별 지원횟수를 담은 정보
*/
map<string, int> SummingUp::sumup(string id, int usertype, vector<Application> Applications)
{
	map<string, int> applicant;

	if (usertype == 1) //일반회원
	{
		for (auto application : Applications)
		{
			if (id == application.getid())
			{
				if (applicant.count(application.getJobPosting().getJobPostingDetail().JobTitle) > 0)
				{
					applicant[application.getJobPosting().getJobPostingDetail().JobTitle]++;
				}
				else
				{
					applicant[application.getJobPosting().getJobPostingDetail().JobTitle] = 1;
				}
			}
		}
	}

	else if (usertype == 0) //회사회원
	{
		for (auto application : Applications)
		{
			if (id == application.getJobPosting().getJobPostingid())
			{
				if (applicant.count(application.getJobPosting().getJobPostingDetail().JobTitle) > 0)
				{
					applicant[application.getJobPosting().getJobPostingDetail().JobTitle]++; //업무 지원자수 +1
				}
				else
				{
					applicant[application.getJobPosting().getJobPostingDetail().JobTitle] = 1; //새 업무 추가
				}
			}
		}
	}

	return applicant;
}


