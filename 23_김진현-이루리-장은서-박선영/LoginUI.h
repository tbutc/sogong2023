#pragma
#include "User.h"

class LoginUI // ȸ������ boundary
{
private:

public:
    void startInterface();
    User * LoginRequest(ifstream& inputFile, vector <User>* user_list);
};