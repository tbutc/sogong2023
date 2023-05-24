#include <string>
#include "JobPosting.h"
#include "User.h"



class Application {
private:
    JobPosting* applicationRecord;
    int applicationStatus;
    User user;

public:
    void getApplication();
    const JobPosting& getJobPosting() const;

    int getApplicationStatus() const {
        return applicationStatus;
    }

    const User& getUser() const {
        return user; 
    }    
    void showSortedApplication();
};

