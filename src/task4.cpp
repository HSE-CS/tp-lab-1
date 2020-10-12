#include <iostream>
#include <cstring>
#include "task4.h"

using namespace std;

char* sum(char* x, char* y) {
    int maxLen = max(strlen(x), strlen(y));
    int cX = strlen(x);
    int cY = strlen(y);
    char* buf = new char[maxLen + 1];
    char* t = new char[maxLen];

    int a = 0;

    if (cX > cY) {
        for (int i = 0; i < cX - cY; ++i) {
            t[i] = '0';
        }
        for (int j = 0; j < cY; ++j) {
            t[cX - cY + j] = y[j];
        }
        y = t;
    }
    if (cY > cX) {
        for (int i = 0; i < cY - cX; ++i) {
            t[i] = '0';
        }
        for (int j = 0; j < cX; ++j) {
            t[cY - cX + j] = x[j];
        }
        x = t;
    }

    for (int i = maxLen - 1; i > -1; --i) {
        buf[i] = x[i] + y[i] + a - '0';
        a = 0;
        if (buf[i] > 57) {
            buf[i] = buf[i] - 10;
            a++;

            if (i == 0 && a > 0) {
                for (int i = a; i > -1; --i) {
                    buf[i] = buf[i - 1];
                }
                buf[0] = '1';
            }
        }
        if (i == 0 && a == 0) {
            buf[maxLen] = '\0';
        }

    }

    delete[] t;

    return buf;

}
