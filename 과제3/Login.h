#pragma
#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>
#include <vector>

#include "User.h"

using namespace std;

class Login
{
public:
    User * showResult(string& id, string& pwd, vector <User>* user_list);
    void log_in(ifstream& inputFile, vector <User>* user_list);
};