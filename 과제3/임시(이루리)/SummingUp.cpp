#include "SummingUp.h"


SummingUp::SummingUp(string ssn, int usertype, vector<Application> Applications)
{
	SummingUpUI().startinterface(sumup(ssn, usertype, Applications));
}

map<string, int> SummingUp::sumup(string ssn, int usertype, vector<Application> Applications)
{
	map<string, int> applicant;

	if (usertype == 1) //일반회원
	{
		for (auto application : Applications)
		{
			if (ssn == application.getssn())
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
			if (ssn == application.getJobPosting().getJobPostingssn())
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


