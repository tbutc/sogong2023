#pragma once
#include <iostream>
#include <string>
#include <string.h>
#include <cstdio>

using namespace std;

class User {
private:
    int UserType; // 1�̸� �Ϲ�ȸ��, 2�̸� ȸ��ȸ��
    string name;
    string SSN; // �Ϲ�ȸ���̸� �ֹε�Ϲ�ȣ, ȸ��ȸ���̸� ����ڹ�ȣ
    string id;
    string pwd;
public:
    bool GetCorrespond();

    string getname() const;
    string getssn() const;

    User(int UserType, string name, string SSN, string id, string pwd) {
        this->UserType = UserType;
        this->name = name;
        this->SSN = SSN;
        this->id = id;
        this->pwd = pwd;
    };
};