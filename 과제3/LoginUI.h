#pragma
#include "User.h"

class LoginUI // ȸ������ boundary
{
private:

public:
    void startInterface();
    void LoginRequest(ifstream& inputFile, vector <User>* user_list);
};