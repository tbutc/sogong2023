// 헤더 선언
#include <stdio.h>
#include <string.h>
#include <string>

using namespace std;

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();
void SignUp();
void program_exit();

// 변수 선언
FILE* in_fp, *out_fp;

int main()
{
    // 파일 입출력을 위한 초기화
    FILE* in_fp = fopen(INPUT_FILE_NAME, "r + ");
    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");

    doTask();

    return 0;
}

void doTask()
{
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;
    while (!is_program_exit)
    {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);
        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1: // "1.1. 회원가입“ 메뉴 부분
            { 
                SignUp();

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

        case 7:
        {
            switch (menu_level_2)
            {
            case 1: // "6.1. 종료“ 메뉴 부분
            {
                program_exit();
                is_program_exit = 1;
                break;;
            }
            }
        }
        }
    }
return;
}


/*************/
/***entity****/
/*************/


struct User {   
    private :
        string id[MAX_STRING];
        string pwd[MAX_STRING];
        string name[MAX_STRING];
    public :
        
};




/*************/
/*************/

void SignUpUI() // 회원가입 boundary
{
    char user_type[MAX_STRING], name[MAX_STRING], SSN [MAX_STRING],address[MAX_STRING], ID[MAX_STRING], password[MAX_STRING];

    // 입력 형식 : 이름, 주민번호, ID, Password를 파일로부터 읽음
    fscanf(in_fp, "%s %s %s %s", name, SSN, ID, password);

    void SignUp();

    fprintf(out_fp, "1.1. 회원가입\n");
    fprintf(out_fp, "%s %s %s %s\n", name, SSN, ID, password);
}

void SignUp() { // 회원가입 control

}


void program_exit() {

}
