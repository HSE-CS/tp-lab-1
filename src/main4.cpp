//
// Created by sharg on 06.10.2020.
//
#include <iostream>
#include "task4.h"
using namespace std;
int main(){
    char* finalSum = sum("1", "99");
    for (int i = 0; i < strlen(finalSum); i++) {
        cout << finalSum[i];
    }
}