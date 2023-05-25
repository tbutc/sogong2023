#include <string>
#include <vector>
#include <map>
#include "JobPosting.h"
#include "Application.h"
#include"SummingUpUI.h"

// 통계를 출력하기 위한 SummingUp 클래스 정의
class SummingUp {
private:

public:
	SummingUp(string ssn, int usertype, vector<Application> Applications);
	map<string, int> sumup(string ssn, int usertype, vector<Application> Aplications);
};
