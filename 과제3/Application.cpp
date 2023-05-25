#include <iostream>
#include <vector>
#include "Application.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include "User.h"
#include <fstream>
using namespace std;
/*
    함수 이름 :Application::Application
    기능	  : Application 클래스의 생성자. JobPosting객체와 아이디를 전달받아 초기화됨
    전달 인자 : jp(JobPosting 객체, id)
    반환값    : 없음
*/
Application::Application(JobPosting jp, string id) :
    applicationRecord(jp), ID(id) {}

/*
    함수 이름 :Application::getJobPosting
    기능	  : Application 객체에 저장된 채용 정보를 반환합니다.
    전달 인자 : 없음
    반환값    : JobPosting 객체 
*/
JobPosting Application::getJobPosting() {
    return applicationRecord;
}

