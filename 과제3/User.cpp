#include <iostream>
#include <string>
#include <cstdio>
#include "User.h"

using namespace std;

bool User::GetCorrespond() {
    return true;
}

string User::getname() const {
    return this->name;
}

string User::getssn() const {
    return this->SSN;
}

string User::getid() const{
    return this->id;
}
