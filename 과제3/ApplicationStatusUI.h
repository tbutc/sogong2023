#include <vector>
#include "User.h"
#include "Application.h"
#include "ApplicationStatus.h"
#include "JobPosting.h"


void showSortedApplication(const User& user, const std::vector<Application>& applications, const std::vector<JobPosting>& jobPostings);

class ApplicationStatusUI {
public:
    void selectApplicationToCancel();
    void startInterface();
};