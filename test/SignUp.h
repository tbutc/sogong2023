#pragma
#include <iostream>
#include <string>
#include <string.h>
#include <cstdio>

#include "User.h"

using namespace std;

class SignUp // ȸ������ control
{
public:
    User showResult(int type, string name, string SSN, string id, string pwd);
    User join(ifstream& inputFile);
};