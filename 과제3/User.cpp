#include <iostream>
#include <string>
#include <cstdio>
#include "User.h"

using namespace std;

/*
    �Լ� �̸� : User::GetCorrespond
    ���	  : ��ġ ���� ��ȯ
    ���� ���� : ����
    ��ȯ��    : true
*/
bool User::GetCorrespond() {
    return true;
}


/*
    �Լ� �̸� : User::getname
    ���	  : name ��ȯ
    ���� ���� : ����
    ��ȯ��    : name
*/
string User::getname() const {
    return this->name;
}


/*
    �Լ� �̸� : User::getssn
    ���	  : ssn ��ȯ
    ���� ���� : ����
    ��ȯ��    : ssn
*/
string User::getssn() const {
    return this->SSN;
}

/*
    �Լ� �̸� : User::getid
    ���	  : id ��ȯ
    ���� ���� : ����
    ��ȯ��    : id
*/
string User::getid() const{
    return this->id;
}


/*
    �Լ� �̸� : User::getpwd
    ���	  : pwd ��ȯ
    ���� ���� : ����
    ��ȯ��    : pwd
*/
string User::getpwd() const {
    return this->pwd;
}



int User::getusertype() const {
    return this->UserType;
}