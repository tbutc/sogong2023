#include <iostream>
using namespace std;

//[ȸ���̸�] [����ڹ�ȣ] [����]

#include "ApplyInfo.h"

ApplyInfo::ApplyInfo(const std::string& cn, const std::string& rn, const std::string& jt)
    : companyName(cn), registrationNumber(rn), jobTitle(jt) {}

std::string ApplyInfo::getCompanyName() const {
    return companyName;
}

std::string ApplyInfo::getRegistrationNumber() const {
    return registrationNumber;
}

std::string ApplyInfo::getJobTitle() const {
    return jobTitle;
}



