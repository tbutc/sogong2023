#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>
#include <vector>
#include "JobPosting.h"

using namespace std;

ApplyUI::ApplyUI() {}

void ApplyUI::showInterface() {
    ofstream writeFile;
    writeFile.open("input.txt");
    string str = "4.2. 채용 지원 \n> ";
    writeFile.write(str.c_str(), str.size());
}

void ApplyUI::ApplyRequest() {
  

    
}

void ApplyUI::showResult() {

}