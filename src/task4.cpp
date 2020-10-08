//
// Created by Алексей Трутнев on 05.10.2020.
//

#include "task4.h"
#include <cstring>
#include <algorithm>
using namespace std;


char *sum(char *x, char *y){
    unsigned int lenX = strlen(x);
    unsigned int lenY = strlen(y);
    unsigned int maxLength = max(lenX, lenY);
    char *buf = new char[maxLength + 1];
    char *t = new char[maxLength];
    bool overflow = false;
    if (lenX > lenY){
        for (unsigned int i = 0; i < lenX - lenY; i++) t[i] = '0';
        for (unsigned int j = 0; j < lenY; j++) t[j + lenX - lenY] = y[j];
        y = t;
    }
    if (lenY > lenX){
        for (unsigned int i = 0; i < lenY - lenX; i++) t[i] = '0';
        for (unsigned int j = 0; j < lenX; j++) t[j + lenY - lenX] = x[j];
        x = t;
    }
    delete [] t;
    for (int i = (int)(maxLength - 1); i >= 0; i--) {
        buf[i] = (char)(x[i] + y[i] + overflow - '0');
        overflow = false;
        if (buf[i] > '9'){
            buf[i] = (char)(buf[i] - 10);
            overflow = true;
            if (0 == i){
                char* buf1 = new char[maxLength];
                buf1[0]='1';
                buf = strcat(buf1,buf);
            }
        }
        if (0 == i && 0 == overflow) buf[maxLength] = '\0';
    }
    return buf;
}
