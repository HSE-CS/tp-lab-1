#include "task4.h"
#include <iostream>
#include <cstring>
#include <algorithm>


using namespace std;

char* sum(char* x, char* y)
{
    int x_len = strlen(x);
    int y_len = strlen(y);
    int max_len = max(x_len, y_len);
    int min_len = min(x_len, y_len);


    char* res = new char[max_len + 1];
    res[max_len] = '\0';
    char* res1 = new char[max_len + 1];
    res1[max_len] = '\0';


    int ostatok=0;
    int razn = max_len - min_len;
    
    for (i = 0; i<min_len; i++) {
        res1[i] = ((x[len_x-i-1] - '0' + y[len_y-i-1] - '0' + ostatok) % 10) + '0';
        ostatok = (x[len_x - i - 1] - '0' + y[len_y - i - 1] - '0' + ostatok) / 10;
        }

    if (max_len == len_x) {
        for (i = min_len; i < max_len; i++) {
            res1[i] = ((x[len_x - i - 1] - '0' + ostatok) % 10) + '0';
            ostatok = (x[len_x - i - 1] - '0' + ostatok) / 10;
        }

    else {
        for (i = min_len; i < max_len; i++) {
            res1[i] = ((y[len_x - i - 1] - '0' + ostatok) % 10) + '0';
            ostatok = (y[len_x - i - 1] - '0' + ostatok) / 10;
        }

    }

    if (ostatok != 0) {
        res1[max_len] = ostatok + '0'
    }

    for (i = max_len; i >= 0; i--) {
        res[max_len - i - 1] = res1[i];
    }

    return res;
    }

    
}