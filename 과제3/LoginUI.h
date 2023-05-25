#pragma
#include "User.h"

class LoginUI // 회원가입 boundary
{
private:

public:
    void startInterface();
    User * LoginRequest(ifstream& inputFile, vector <User>* user_list);
};