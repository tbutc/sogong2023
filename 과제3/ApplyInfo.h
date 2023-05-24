#ifndef APPLYINFO_H
#define APPLYINFO_H

#include <string>

class ApplyInfo {
private:
    std::string companyName;
    std::string registrationNumber;
    std::string jobTitle;

public:
    ApplyInfo(const std::string& cn, const std::string& rn, const std::string& jt);

    std::string getCompanyName() const;
    std::string getRegistrationNumber() const;
    std::string getJobTitle() const;
};

#endif


