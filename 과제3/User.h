#include <iostream>
#include <string>
#include <string.h>
#include <cstdio>

class User {
private:
    int UserType; // 1이면 일반회원, 2이면 회사회원
    string name;
    string SSN; //일반회원이면 주민등록번호, 회사회원이면 사업자번호
    string id;
    string pwd;
public:
    bool GetCorrespond();
    //string Getname();
    //string Getid();
    //string Getpwd();
    //string GetSSN();
    User(int UserType, string name, string SSN, string id, string pwd) {
        this->UserType = UserType;
        this->name = name;
        this->SSN = SSN;
        this->id = id;
        this->pwd = pwd;
    };
};