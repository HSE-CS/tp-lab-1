//
// Created by sharg on 06.10.2020.
//
#include "task5.h"
void split(char ***result, int *N, char *buf, char ch) {
    *N = 0;
    for (int iter = 0; iter < strlen(buf); iter++) {
        if (buf[iter] == ch)
            (*N)++;

    }
    (*N)++;
    int tempChar = 0;
    int tempNumber = 0;
    int *sizes = new int[*N];
    for (int iter = 0; iter < strlen(buf); iter++) {
        tempChar++;
        if (buf[iter] == ch) {
            sizes[tempNumber] = tempChar;
            tempNumber++;
            tempChar = 0;
        }
        if (iter == strlen(buf) - 1) {
            sizes[tempNumber] = tempChar + 1;
        }

    }
    *result = new char *[*N];
    int count = 0;
    for (int iter = 0; iter < (*N); iter++) {
        (*result)[iter] = new char[sizes[iter]];
    }
    tempChar=0;
    for (int iter = 0; iter < strlen(buf); iter++) {
        if (iter == strlen(buf) - 1) {
            (*result)[count][tempChar+1] = '\0';
        }
        if (buf[iter] == ch) {
            (*result)[count][tempChar] = '\0';
            count++;
            tempChar = 0;
//
        } else {
            (*result)[count][tempChar] = buf[iter];
            tempChar++;
        }
    }
}