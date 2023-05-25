#include "Apply.h"
#include "Application.h"
#include "ApplyInfo.h"
using namespace std;

 vector<JobDetail> Apply::start(string ssn, vector<JobPosting> jobPostings) {
        //jobdetail�� �������� -> application�� ���ͷ�
     vector<ApplyInfo> applications;
        for (auto& posting : jobPostings)
        {
            if (ssn == posting.getJobPostingssn())
            {
                std::string companyName = posting.getJobPostingcname();
                std::string registrationNumber = posting.getJobPostingssn();
                std::string jobTitle = posting.getJobPostingDetail().JobTitle;

                // Application ��ü�� �����Ͽ� ���� ����
                Application newApplication(companyName, registrationNumber, jobTitle);

                // Application�� ���Ϳ� �߰�
                applications.push_back(newApplication);
            }
        }
        return applications;
    } 
 
 // ���� ������ ����ڹ�ȣ ���ϴ� �ڵ�


 class Application {
 private:
     std::string companyName;
     std::string registrationNumber;
     std::string jobTitle;

 public:
     Application(const std::string& cn, const std::string& rn, const std::string& jt)
         : companyName(cn), registrationNumber(rn), jobTitle(jt) {}

     std::string getCompanyName() const {
         return companyName;
     }

     std::string getRegistrationNumber() const {
         return registrationNumber;
     }

     std::string getJobTitle() const {
         return jobTitle;
     }
 };


