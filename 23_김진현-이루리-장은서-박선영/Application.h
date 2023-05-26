#pragma once
#include <string>
#include "JobPosting.h"
#include "User.h"

//Application 클래스정의
class Application {
private:
    JobPosting applicationRecord;
    string ID;

public:
    Application(JobPosting jp, string id);
    JobPosting getJobPosting();

    string getid() {
        return ID;
    }
};
