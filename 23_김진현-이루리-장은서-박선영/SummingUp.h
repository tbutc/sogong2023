#include <string>
#include <vector>
#include <map>
#include "JobPosting.h"
#include "Application.h"
#include"SummingUpUI.h"

// ��踦 ����ϱ� ���� SummingUp Ŭ���� ����
class SummingUp {
private:
	map<string, int> sumup(string ssn, int usertype, vector<Application>& Aplications);
public:
	SummingUp(string id, int usertype, vector<Application>& Applications);
};
