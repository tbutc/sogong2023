#include <iostream>
#include <string>
#include <string.h>
#include <cstdio>

class User {
private:
    int UserType; // 1�̸� �Ϲ�ȸ��, 2�̸� ȸ��ȸ��
    string name;
    string SSN; //�Ϲ�ȸ���̸� �ֹε�Ϲ�ȣ, ȸ��ȸ���̸� ����ڹ�ȣ
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