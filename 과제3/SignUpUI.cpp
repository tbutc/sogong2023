#include <iostream>
#include <string>
#include <cstdio>

#include "SignUpUI.h"
#include "SignUp.h"
#include "User.h"

using namespace std;


void SignUpUI::startInterface() {

    fprintf(fopen("output.txt", "w+"), "1.1. ȸ������\n");
    
}


User SignUpUI::signup(){
    string id, pwd, name, SSN;
    int type;
    // �Է� ���� : �̸�, �ֹι�ȣ, ID, Password�� ���Ϸκ��� ����
    fscanf(fopen("input.txt", "r+"), "%d %s %s %s %s", type, name, SSN, id, pwd);
    

    //showResult ȣ��
    SignUp a;
    User newUser = a.showResult(type, name, SSN, id, pwd);

    fprintf(fopen("output.txt", "w+"), "%d %s %s %s %s\n", type, name, SSN, id, pwd);
    return newUser;
}