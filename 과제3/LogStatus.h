#pragma
#include "User.h"

using namespace std;

class LogStatus {
private :
	User * log_user; //접속 중이거나 가장 최근 접속한 유저
	bool status;
public:
	LogStatus() {
		log_user = NULL;
		status = false;
	}

	void change_log_user(User * user) {
		this->log_user = user;
	}

	User* get_log_user() {
		return this->log_user;
	}

	void activate() {
		this->status = true;
	}

	void deactivate() {
		this->status = false;
	}
};