#pragma
#include <iostream>
#include <string>
#include <string.h>
#include <cstdio>

#include "User.h"

using namespace std;

class memWithdraw
{
public:
    User * showResult(vector <User>* user_list, User* logout_user);
    User* withdraw(vector <User>* user_list, User* logout_user);
};