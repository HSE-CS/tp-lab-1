//
// Created by sharg on 06.10.2020.
//

#include <iostream>
#include "task4.h"
using namespace std;
#include <cstring>
#include <string>
int main(){
    char* summa = sum("99999999999999999999", "1");  // РАВНЫ
    for (int i = 0; i < strlen(summa); ++i) {
        std::cout << summa[i];
    }
    return 0;
}