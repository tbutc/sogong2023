#pragma once

#include <string>
#include "JobPosting.h"
#include "User.h"



class Application {
private:
    JobPosting applicationRecord;
    string SSN;

public:
    Application(JobPosting jp, string id);
    void getApplication();
    JobPosting getJobPosting() ;

     string getssn()  {
        return SSN;
    }    
    void showSortedApplication();
};

