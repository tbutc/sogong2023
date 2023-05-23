#include <iostream>
#include <string>
#include <cstdio>

#include "SignUpUI.h"
#include "SignUp.h"
#include "User.h"

using namespace std;


void SignUpUI::startInterface() {

    fprintf(fopen("output.txt", "w+"), "1.1. 회원가입\n");
    
}


User SignUpUI::signup(){
    string id, pwd, name, SSN;
    int type;
    // 입력 형식 : 이름, 주민번호, ID, Password를 파일로부터 읽음
    fscanf(fopen("input.txt", "r+"), "%d %s %s %s %s", type, name, SSN, id, pwd);
    

    //showResult 호출
    SignUp a;
    User newUser = a.showResult(type, name, SSN, id, pwd);

    fprintf(fopen("output.txt", "w+"), "%d %s %s %s %s\n", type, name, SSN, id, pwd);
    return newUser;
}