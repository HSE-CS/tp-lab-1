#include <iostream>
#include <cstring>
#include "task5.h"

using namespace std;



void split(char*** result, int* N, char* buf, char ch) {
    char** test = new char* [3];
    for (int i = 0; i < 3; ++i) {
        test[i] = new char[3];
    }

    /*char **test = (char**) malloc(10/ sizeof(char));
    for (int i = 0; i < 10; ++i) {
        test[i] = (char*) malloc(10);
    }*/





    //test[0][0] = '0';
    (*result) = test;

    int let = 0;
    for (int i = 0; i < strlen(buf); i++) {
        if (buf[i] == ch) {
            test[(*N)][let] = '\0';
            (*N)++;
            let = 0;

            continue;
        }
        if (i == strlen(buf) - 1) {
            test[(*N)][let + 1] = '\0';
        }
        test[(*N)][let] = buf[i];
        let++;

    }

    (*N)++; //потому что массив считается с 0-го элемента, а счетчик должен работать с 1-го

}