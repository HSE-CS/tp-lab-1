//
// Created by Vadim Makarov on 03.10.2020.
//

#include <iostream>
#include <cstring>
#include "task5.h"

using namespace std;



void split(char ***result, int *N, char *buf, char ch){
    char **test = new char* [10];
    for (int i = 0; i < 10; ++i) {
        test[i] = new char[10];
    }

    test[0][0] = '0';
    (*result) = test;

    int letterCounter = 0;
    for (int i = 0; i < strlen(buf); i++) {
        if (buf[i] == ch){
            (*N)++;
            letterCounter = 0;
            continue;
        }
        test[(*N)][letterCounter] = buf[i];
        letterCounter++;

    }

    (*N)++; //потому что массив считается с 0-го элемента, а счетчик должен работать с 1-го

}