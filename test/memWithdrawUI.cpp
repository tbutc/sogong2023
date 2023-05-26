#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>


#include "memWithdrawUI.h"
#include "memWithdraw.h"

/*
    함수 이름 : memWithdrawUI::startinterface()
    기능     : 회원탈퇴 인터페이스 실행
    전달 인자 : 없음
    반환값    : 없음
*/
void memWithdrawUI::startInterface() {
    ofstream outputFile("output.txt", ios::app);

    string message = "1.2. 회원탈퇴 \n> ";
    outputFile << message;
    outputFile.close();

    return;
}


/*
    함수 이름 : memWithdrawUI::memWithdraw()
    기능     : 회원탈퇴 인터페이스 실행
    전달 인자 : user_list, logout_user
    반환값    : User 주소값
*/
User * memWithdrawUI::memberWithdraw(vector <User>* user_list, User* logout_user) {
    memWithdraw a;

    ofstream outputFile("output.txt", ios::app);

    outputFile << logout_user->getid() << endl;
    outputFile.close();

    return a.showResult(user_list, logout_user);
}