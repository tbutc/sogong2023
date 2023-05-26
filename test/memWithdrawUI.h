#pragma
#include <iostream>
#include <string>
#include <string.h>
#include <cstdio>
#include <vector>

#include"User.h"

using namespace std;

class memWithdrawUI
{
public:
    void startInterface();
    User * memberWithdraw(vector <User>* user_list, User* logout_user);
};