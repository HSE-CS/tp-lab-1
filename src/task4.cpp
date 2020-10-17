#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#include <algorithm>
#include <cstring>

using namespace std;

char* sum(char* x, char* y) {
    unsigned int len_x = strlen(x);
    unsigned int len_y = strlen(y);
    unsigned int len = max(len_x, len_y);
    bool overflow = false;

    if (len_x > len_y) {
        char* buf = new char[len_x - len_y];
        for (unsigned int i = { 0 }; i < len_x - len_y; i++) buf[i] = '0';
        buf[len_x - len_y] = { 0 };
        y = strcat(buf, y);
    }
    
    else if (len_y > len_x) {
        char* buf = new char[len + 1];
        for (unsigned int i = { 0 }; i < len_y - len_x; i++) buf[i] = '0';
        buf[len_y - len_x] = { 0 };
        x = strcat(buf, x);
    }
    char* temp = new char[len + 2];
    temp[len + 1] = '\0';
    
    for (unsigned int i = 0; i <= len; i++) {
        if (i == len) {
            temp[0] = '0' + overflow;
            break;
        }
        temp[len - i] = x[len - i - 1] + y[len - i - 1] + overflow - '0';
        overflow = false;
        if (temp[len - i] > '9') {
            overflow = true;
            temp[len - i] = temp[len - i] - 10;
        }
    }
    if (temp[0] == '0') return temp + 1;
    return temp;
}