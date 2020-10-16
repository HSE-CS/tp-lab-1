//
//  main1.cpp
//  laba
//
//  Created by Anastasiya Rogozyan on 16.10.2020.
//  Copyright © 2020 Anastasiya Rogozyan. All rights reserved.
//


#include <iostream>
#include "../include/task4.h"
using namespace std;
#include <cstring>

char * sum(char *x, char *y) {
    int x_len = (int)strlen(x);
    int y_len = (int)strlen(y);
    int *resInt = new int[max(x_len, y_len) + 2];


    // resInt[0] = -1;
    char *strf = new char[max(x_len, y_len) + 1];
    char *strs = new char[max(x_len, y_len) + 1];
    if(x_len > y_len) {
        for(int i =0; i< (x_len - y_len); i++)
            strs[i] = '0';

        for(int i = 0; i < y_len; i++)
            strs[i + (x_len - y_len)] = y[i];

        strcpy(strf, x);
    }
    else if(x_len < y_len) {
        for(int i =0; i< (y_len - x_len); i++)
            strf[i] = '0';
         for(int i = 0; i < x_len; i++)
            strf[i + (y_len - x_len)] = x[i];
        strcpy(strs, y);
    }
    else {
        strcpy(strf, x);
        strcpy(strs, y);
    }
    for(int offset = strlen(strs) - 1; offset >= 0; offset--) {
        int a = (int)strf[offset]  - '0';
        int b = (int)strs[offset]  - '0';
        int c = (int)resInt[offset + 1];
        resInt[offset + 1] = (a + b + c) % 10;
        resInt[offset ] = (a + b + c) / 10;
    }

    char *res;
    if(resInt[0] != 0) {
        res = new char[max(x_len, y_len) + 1];
        int i = 0;
        for(; i <= max(x_len, y_len);i++)
            res[i] = resInt[i] + '0';
        res[i] ='\0';
    }
    else {
        int i = 1;
        res = new char[max(x_len, y_len) + 2];
        for(; i <= max(x_len, y_len);i++)
            res[i-1] = resInt[i] + '0';
        res[i-1] ='\0';
    }


    delete [] resInt;
    delete [] strf;
    delete [] strs;
    return res;
} 
