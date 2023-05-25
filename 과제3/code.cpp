// 헤더 선언
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
#include <fstream>

#include "ListJobPostingUI.h"

#include "User.h"
#include "SignUp.h"
#include "Login.h"
#include "LogStatus.h"
#include "Logout.h"
#include "memWithdraw.h"


using namespace std;

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();
//void program_exit();

// 변수 선언
FILE* in_fp, * out_fp;


int main()
{
    doTask();

    return 0;
}

void doTask()
{
    LogStatus* logstatus = new LogStatus();
    User* logged_user = nullptr;

    logstatus->change_log_user(nullptr);
    logstatus->deactivate();

    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    vector <User> user_list;

    ifstream inputFile("input.txt");

    Login in;
    Logout out;
    SignUp up;
    memWithdraw mW;


    while (!is_program_exit)
    {
        menu_level_1 = 0, menu_level_2 = 0;
        inputFile >> menu_level_1;
        inputFile >> menu_level_2;


        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1: // "1.1. 회원가입“ 메뉴 부분
            {
                
                user_list.push_back(up.join(inputFile));

                break;
            }
            case 2: // "1.2. 회원탈퇴"
            {
                User * del_user = mW.withdraw(&user_list, logged_user);
                user_list.erase(remove(user_list.begin(), user_list.end(), *del_user), user_list.end());

                break;
            }
            }
            break;
        }
        case 2:
        {
            switch (menu_level_2)
            {
            case 1: // "2.1. 로그인"
            {
                logged_user = in.log_in(inputFile, &user_list); //log_in 함수 실행하여 반환값을 logged_user에 저장

                logstatus->change_log_user(logged_user);
                if (logstatus->get_log_user() != nullptr) { logstatus->activate(); }

                break;

            }
            case 2: // "2.2. 로그아웃
            {

                logstatus->deactivate();

                User logout_user = *out.log_out(&user_list, logged_user); // control 함수인 log_out 실행

                break;
            }
            }
            break;
        }

        case 3:
        {
            switch (menu_level_2)
            {
            case 1: // "3.1. 채용 정보 등록"
            {
                break;
            }
            case 2: // "3.2. 등록된 채용 정보 조회"
            {
                break;
            }
            }
            break;
        }

        case 4:
        {
            switch (menu_level_2)
            {
            case 1:
            {
                break;
            }
            case 2:
            {
                break;
            }
            }
            break;
        }

        case 5:
        {
            switch (menu_level_2)
            {
            case 1:
            {
                break;
            }
            case 2:
            {
                break;
            }
            }
            break;
        }


        case 0:
        {
            switch (menu_level_2)
            {
            case 0: // "6.1. 종료“ 메뉴 부분
            {
                //program_exit();
                is_program_exit = 1;
                break;
            }
            }
            break;
        }

        }
    }
    return;
}
