#include <string>
#include <vector>
#include <map>
#include "JobPosting.h"
#include "Application.h"
#include"SummingUpUI.h"

class SummingUpUI;

class SummingUp {
private:

public:
	SummingUp(string id, int usertype, vector<Application> Applications);
	map<string, int> sumup(string ssn, int usertype, vector<Application> Aplications);
};
