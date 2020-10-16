#include <algorithm>
#include <iostream>
#include "task1.h"
const unsigned int Min = 1;
const unsigned  Max = 20;

unsigned long findValue(unsigned int min, unsigned int max) {
    int i;
    int j;
    unsigned long result = 1;
    //int** divider = new int* [max];
    //for (int i = 0; i < max; i++)
        //divider[i] = new int[max];

   // int* divider2 = new int[max];

    long divider[Max + 1][Max + 1] = { 0 };
    long divider2[Max + 1] = { 0 };
    for (i = min; i <= max; i++) {
        int number = i;
        int del = 2;
        while (number != 1) {
            if (number % del == 0) {
                number = number / del;
                divider[del][i]++;
            }
            else del++;

        }
    }

    for (j = min; j <= max; j++) {
        for (i = min; i <= max; i++) {
            if (divider[j][i] > divider2[j]) {
                divider2[j] = divider[j][i];
            }
        }
    }

    for (i = min; i <= max; i++) {
        if (divider[i] != 0) {
            result = result * pow(i, divider2[i]);
        }
    }
    return result;
}