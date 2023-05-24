#include "SummingUp.h"


SummingUp::SummingUp() {}

map<string, int> SummingUp::sumup(string name, int usertype, vector<Application> Applications)
{
	map<string, int> applicant;

	if (usertype == 1) //�Ϲ�ȸ��
	{
		for (auto& application : Applications)
		{
			if (name == application.Applicantname())
			{
				if (applicant.count(application.jobTitle) > 0)
				{
					applicant[application.jobTitle]++;
				}
				else
				{
					applicant[application.jobTitle] = 1;
				}
			}
		}
	}

	else if (usertype == 0) //ȸ��ȸ��
	{
		for (auto& application : Applications)
		{
			if (name == application.companyname())
			{
				if (applicant.count(application.jobTitle) > 0)
				{
					applicant[application.jobTitle]++; //���� �����ڼ� +1
				}
				else
				{
					applicant[application.jobTitle] = 1; //�� ���� �߰�
				}
			}
		}
	}

	return applicant;
}


