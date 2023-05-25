// 헤더 선언
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
#include <fstream>

#include "ListJobPostingUI.h"
#include "ListApplication.h"
#include "User.h"
#include "SignUp.h"
#include "Login.h"
#include "LogStatus.h"
#include "Logout.h"


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

    logstatus->change_log_user(nullptr);
    logstatus->deactivate();
    

    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    vector <User> user_list;
    vector<Application> applications;
    
    ifstream inputFile("input.txt");

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
                SignUp a;
                user_list.push_back(a.join(inputFile));

                break;
            }
            case 2: // "1.2. 회원탈퇴"
            {

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
                Login a;
                User* logged_user = a.log_in(inputFile, &user_list); //log_in 함수 실행하여 반환값을 logged_user에 저장

                logstatus->change_log_user(logged_user);
                if (logstatus->get_log_user() != nullptr) { logstatus->activate(); }

                break;

            }
            case 2: // "2.2. 로그아웃
            {

                logstatus->deactivate();

                Logout a;
                User logout_user = *a.log_out(&user_list, logstatus->get_log_user()); // control 함수인 log_out 실행

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
            case 3: // 4.3. 지원 정보 조회
            {
                ApplicationUI applicationUI;
                applicationUI.showSortedApplications(applications);
                break;
            }
            case 4: // 4.4. 지원 취소
            {
                ApplicationUI applicationUI;
                string ssn;
                applicationUI.PrintcancelApplication(ssn, applications);
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
