#include "SummingUp.h"


/*
	�Լ� �̸� : SummingUp::SummingUp()
	���	  : ������ ����� �����ϴ� ������
	���� ���� : id, usertype, Applications -> ID,����Ÿ��, ��������
	��ȯ��    : ����
*/
SummingUp::SummingUp(string id, int usertype, vector<Application>& Applications)
{
	SummingUpUI().startinterface(sumup(id, usertype, Applications));
}

/*
	�Լ� �̸� : SummingUp::sumup()
	���	  : ��踦 �����ϴ� �Լ�
	���� ���� : id, usertype, Applications -> ID,����Ÿ��, ��������
	��ȯ��    : applicant -> ȸ��ȸ���̶�� ������ �����ڼ�, �Ϲ�ȸ���̶�� ������ ����Ƚ���� ���� ����
*/
map<string, int> SummingUp::sumup(string id, int usertype, vector<Application>& Applications)
{
	map<string, int> applicant;



	if (usertype == 1) //ȸ��ȸ��
	{
		for (auto application : Applications)
		{
			if (id == application.getJobPosting().getJobPostingid())
			{
				if (applicant.count(application.getJobPosting().getJobPostingDetail().JobTitle) > 0)
				{
					applicant[application.getJobPosting().getJobPostingDetail().JobTitle]++; //���� �����ڼ� +1
				}
				else
				{
					applicant[application.getJobPosting().getJobPostingDetail().JobTitle] = 1; //�� ���� �߰�
				}
			}
		}
	}

	else if (usertype == 2) //�Ϲ�ȸ��
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


	return applicant;
}

