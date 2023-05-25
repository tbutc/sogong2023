#include <iostream>
#include <string>
#include <cstdio>
#include "User.h"

using namespace std;

/*
    함수 이름 : User::GetCorrespond
    기능	  : 일치 여부 반환
    전달 인자 : 없음
    반환값    : true
*/
bool User::GetCorrespond() {
    return true;
}


/*
    함수 이름 : User::getname
    기능	  : name 반환
    전달 인자 : 없음
    반환값    : name
*/
string User::getname() const {
    return this->name;
}


/*
    함수 이름 : User::getssn
    기능	  : ssn 반환
    전달 인자 : 없음
    반환값    : ssn
*/
string User::getssn() const {
    return this->SSN;
}

/*
    함수 이름 : User::getid
    기능	  : id 반환
    전달 인자 : 없음
    반환값    : id
*/
string User::getid() const{
    return this->id;
}


/*
    함수 이름 : User::getpwd
    기능	  : pwd 반환
    전달 인자 : 없음
    반환값    : pwd
*/
string User::getpwd() const {
    return this->pwd;
}



int User::getusertype() const {
    return this->UserType;
}