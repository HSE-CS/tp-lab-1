#ifndef TASK4_CPP
#define TASK4_CPP

#include "task4.h"

bool isNum(char *num){
    if (!strlen(num))
        return false;
    for (int i = 0; i < strlen(num); ++i)
        if (num[i] < '0' || num[i] > '9')
            return false;
    return true;
}

char *reverseString(char *s, int len){
    for (int i = 0; i < len / 2; ++i)
        swap(s[i], s[len - i - 1]);
    return s;
}

char * sum(char *x, char *y){
    if (!isNum(x))
        return y;
    else if (!isNum(y))
        return x;

    char upper = 0, lower = 0, tmp = 0, result = 0;
    int len_x = strlen(x), len_y = strlen(y);
    int max_len = len_x > len_y ? len_x+1: len_y+1;
    char *new_str = (char *)malloc(max_len);
    int i;
    for (i = 0; i < max_len; ++i) {
        upper = len_x - i > 0? x[len_x-i-1] - 48 : 0;
        lower = len_y - i > 0? y[len_y-i-1] - 48 : 0;
        result = upper + lower + tmp;
        new_str[i] = result % 10 + 48;
        tmp = result / 10;
        //cout << new_str << endl <<
        //"upper: " << (int)upper << " lower: " << (int)lower << " result: " << (int)result << " tmp: " << (int)tmp << endl << endl;
    }
    if (new_str[max_len-1] == '0')
        --max_len;
    //cout << new_str << endl;
    reverseString(new_str, max_len);
    new_str[max_len] = '\0';
    if (max_len == 0){
        new_str[0] = '0';
        new_str[1] = '\0';
    }
    return new_str;
}

#endif