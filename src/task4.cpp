//
// Created by Vadim Makarov on 03.10.2020.
//

#include <iostream>
#include <cstring>
#include "task4.h"

using namespace std;

char * sum(char *x, char *y){
    int maxLength = max(strlen(x), strlen(y));
    int counterX = strlen(x);
    int counterY = strlen(y);
    char * buf = new char[maxLength+1];
    char * t = new char[maxLength];

    int overflow = 0;

    if (counterX > counterY){
        for (int i = 0; i < counterX - counterY; ++i) {
            t[i] = '0';
        }
        for (int j = 0; j < counterY; ++j) {
            t[counterX - counterY + j] = y[j];
        }
        y = t;
    }
    if (counterY > counterX){
        for (int i = 0; i < counterY - counterX; ++i) {
            t[i] = '0';
        }
        for (int j = 0; j < counterX; ++j) {
            t[counterY - counterX + j] = x[j];
        }
        x = t;
    }

    //cout << x << endl;
    //cout << y << endl;

    for (int i = maxLength-1; i > -1; --i) {
        buf[i] = x[i] + y[i] + overflow - '0';
        overflow = 0;
        if (buf[i] > 57){
            buf[i] = buf[i] - 10;
            overflow++;

            if (i == 0 && overflow > 0){
                for (int i = maxLength; i > -1; --i) {
                    buf[i] = buf[i-1];
                }
                buf[0] = '1';
            }

        }

    }

    delete [] t;

    return (*buf);

}

