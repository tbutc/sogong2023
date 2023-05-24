// 헤더 선언
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
#include <fstream>

#include "ListJobPostingUI.h"
#include "User.h"
#include "SignUpUI.h"


using namespace std;

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();
void program_exit();

// 변수 선언
FILE* in_fp, *out_fp;



int main()
{
    // 파일 입출력을 위한 초기화
    //FILE* in_fp = fopen(INPUT_FILE_NAME, "r + ");
    //FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");

    doTask();

    return 0;
}

void doTask()
{
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    vector <User> user_list;

    while (!is_program_exit)
    {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        //fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);
         
        ifstream inputFile("input.txt");
        inputFile >> menu_level_1;
        inputFile >> menu_level_2;
        inputFile.close();

        


        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1: // "1.1. 회원가입“ 메뉴 부분
            {
                SignUpUI a;

                a.startInterface(); // 1.startInterface
                user_list.push_back( a.signup() ); // 2.signup // 2.1. showResult // user_list vector에 새로 회원가입한 user 추가

                break;
            }
            case 2: // "1.2. 회원탈퇴"
            {

                break;
            }
            }
        }
        case 2:
        {
            switch (menu_level_2)
            {
            case 1: // "2.1. 로그인"
            {

            }
            case 2: // "2.2. 로그아웃"
            {

            }
            }
        }

        case 3:
        {
            switch (menu_level_2)
            {
            case 1: // "3.1. 채용 정보 등록"
            {

            }
            case 2: // "3.2. 등록된 채용 정보 조회"
            {
               
            }
            }
        }

        case 4:
        {
            switch (menu_level_2)
            {
            case 1:
            {

            }
            case 2:
            {

            }
            }
        }

        case 5:
        {
            switch (menu_level_2)
            {
            case 1:
            {

            }
            case 2:
            {

            }
            }
        }

                
        case 6:
        {
            switch (menu_level_2)
            {
            case 1: // "6.1. 종료“ 메뉴 부분
            {
                //program_exit();
                is_program_exit = 1;
                break;;
            }
            }
        }

        }
    }
    return;
}
