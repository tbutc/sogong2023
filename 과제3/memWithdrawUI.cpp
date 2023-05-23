#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>

#include "memWithdrawUI.h"
#include "memWithdraw.h"

void memWithdrawUI::startInterface() {
    ofstream writeFile;
    writeFile.open("input.txt");
    string str = "1.2. È¸¿øÅ»Åð \n> ";
    writeFile.write(str.c_str(), str.size());
}

void memWithdrawUI::memberWithdraw() {
    memWithdraw a;
    a.showResult();
}