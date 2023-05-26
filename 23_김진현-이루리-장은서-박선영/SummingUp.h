#include <string>
#include <vector>
#include <map>
#include "JobPosting.h"
#include "Application.h"
#include"SummingUpUI.h"

// 통계를 출력하기 위한 SummingUp 클래스 정의
class SummingUp {
private:
	map<string, int> sumup(string ssn, int usertype, vector<Application>& Aplications);
public:
	SummingUp(string id, int usertype, vector<Application>& Applications);
};
