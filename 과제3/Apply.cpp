#include "Apply.h"
#include "Application.h"
#include "ApplyInfo.h"
using namespace std;

 vector<JobDetail> Apply::start(string ssn, vector<JobPosting> jobPostings) {
        //jobdetail은 지원정보 -> application에 백터로
     vector<ApplyInfo> applications;
        for (auto& posting : jobPostings)
        {
            if (ssn == posting.getJobPostingssn())
            {
                std::string companyName = posting.getJobPostingcname();
                std::string registrationNumber = posting.getJobPostingssn();
                std::string jobTitle = posting.getJobPostingDetail().JobTitle;

                // Application 객체를 생성하여 정보 저장
                Application newApplication(companyName, registrationNumber, jobTitle);

                // Application을 벡터에 추가
                applications.push_back(newApplication);
            }
        }
        return applications;
    } 
 
 // 받은 변수랑 사업자번호 비교하는 코드


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


