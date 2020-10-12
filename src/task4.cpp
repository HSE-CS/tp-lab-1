#include "task4.h"
#include <algorithm>
#include <string>


char* sum(char* x, char* y) {
    unsigned int lenX = strlen(x);
    unsigned int lenY = strlen(y);
    unsigned int maxLength = std::max(lenX, lenY);
    char* buf = new char[maxLength + 1];
    char* t = new char[maxLength];
    bool overflow = false;
    if (lenX > lenY) {
        for (unsigned int i = 0; i < lenX - lenY; i++) {
            t[i] = '0';
        }
        for (unsigned int j = lenX - lenY; j < lenY; j++) {
            t[j] = y[j];
        }
        y = t;
    }
    if (lenY > lenX) {
        for (unsigned int i = 0; i < lenY - lenX; i++) {
            t[i] = '0';
        }
        for (unsigned int j = lenY - lenX; j < lenX; j++) {
            t[j] = x[j];
        }
        x = t;
    }
    delete[] t;
    for (int i = maxLength - 1; i >= 0; i--) {
        buf[i] = (char)(x[i] + y[i] + overflow - '0');
        overflow = false;
        if (buf[i] > '9') {
            buf[i] = (char)(buf[i] - 10);
            overflow = true;
            if (0 == i) {
                for (unsigned int k = maxLength; k >= 0; k--) {
                    buf[k] = buf[k - 1];
                }
                buf[0] = '1';
            }
        }
        if (0 == i && 0 == overflow) {
            buf[maxLength] = '\0';
        }
    }
    return buf;
}