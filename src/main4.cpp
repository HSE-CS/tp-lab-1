//
// Created by sharg on 06.10.2020.
//
#include <iostream>
#include "task4.h"
using namespace std;
int main(){
    char* finalSum = sum("99999999999999999999", "1");
    for (int i = 0; i < strlen(finalSum); i++) {
        cout << finalSum[i];
    }
}