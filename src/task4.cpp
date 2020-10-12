#include "task4.h"
#include <stdlib.h>

char * sum(char *x, char *y) {
    char * str;
    unsigned int l1 = strlen(x);
    unsigned int l2 = strlen(y);
    if (l1 > l2) {
        char tmp = 0;
        str = (char*)malloc(l1 * (sizeof(char)));
        for (int i = 0; i < l2; i++) {
            char k = (x[l1 - i - 1] + y[l2 - i - 1]) - '0' - '0' + tmp;
            if (k < 10) {
                str[i] = k + '0';
                tmp = 0;
            }
            else {
                str[i] = (k % 10) + '0';
                tmp = 1;
            }
        }
        for (int i = l2; i < l1; i++) {
            char k = x[l1 - i - 1] - '0' + tmp;
            if (k < 10) {
                str[i] = k + '0';
                tmp = 0;
            }
            else {
                str[i] = (k % 10) + '0';
                tmp = 1;
            }
        }
        if (tmp == 1) {
            str = (char *)realloc(str, l1 + 1);
            str[l1] = '1';
        }
    }
    else {
        char tmp = 0;
        str = (char*)malloc(l2 * (sizeof(char)));
        for (int i = 0; i < l1; i++) {
            char k = (x[l1 - i - 1] + y[l2 - i - 1]) - '0' - '0' + tmp;
            if (k < 10) {
                str[i] = k + '0';
                tmp = 0;
            }
            else {
                str[i] = (k % 10) + '0';
                tmp = 1;
            }
        }
        for (int i = l1; i < l2; i++) {
            char k = y[l2 - i - 1] - '0' + tmp;
            if (k < 10) {
                str[i] = k + '0';
                tmp = 0;
            }
            else {
                str[i] = (k % 10) + '0';
                tmp = 1;
            }
        }
        if (tmp == 1) {
            str = (char *)realloc(str, l2 + 1);
            str[l2] = '1';
        }
    }
    std::reverse(str, str + strlen(str));
    return str;
}
