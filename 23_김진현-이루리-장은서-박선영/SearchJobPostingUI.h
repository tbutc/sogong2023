#pragma once
#include <iostream>
#include <string>
#include <string.h>
#include <cstdio>
#include "JobPosting.h"

using namespace std;
// 채용정보를 검색하기 위한 SearchJobPostingUI 클래스 정의
class SearchJobPostingUI
{
public:
    SearchJobPostingUI();
    string startInterface(ifstream& inputFile);
    void showresult(JobPosting* posting);
};
