#include <iostream>
#include <cstring>
#include "task5.h"

using namespace std;


void split(char*** result, int* N, char* buf, char ch) {
    for (int i = 0; i < strlen(buf); i++) {
        if (buf[i] == ch) {
            (*N)++;
        }
    }
    (*N)++;

    (*result) = new char* [*N];
    for (int i = 0; i < (*N); i++) {
        (*result)[i] = new char[strlen(buf)];
    }

    int c = -1;
    for (int i = 0; i < (*N); i++) {
        c++;
        for (int j = 0; buf[c] != ch && buf[c] != '\0'; j++) {
            (*result)[i][j] = buf[c];
            (*result)[i][j + 1] = '\0';
            c++;
        }
    }
}