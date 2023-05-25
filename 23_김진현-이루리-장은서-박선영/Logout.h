#pragma
#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>
#include <vector>

#include "User.h"

using namespace std;

class Logout
{
public:
    User* showResult(vector <User>* user_list, User* logout_user);
    User* log_out(vector <User>* user_list, User* logout_user);
};