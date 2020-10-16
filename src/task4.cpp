#include "task4.h"
#include <iostream>
#include <cstring>
#include <algorithm>


using namespace std;

char* sum(char* x, char* y)
{
    int x_len = strlen(x);
    int y_len = strlen(y);
    int max_len;
    int min_len;

    if (x_len != y_len) {
        max_len = max(x_len, y_len);
        min_len = min(x_len, y_len);
    }
    else {
        max_len = x_len;
        min_len = y_len;

    }


    char* res = new char[max_len + 1];
    res[max_len] = '\0';
    char* res1 = new char[max_len + 1];
    res1[max_len] = '\0';


    int ostatok=0;
    int razn = max_len - min_len;
    
    for (int i = 0; i<min_len; i++) {
        res1[i] = ((x[x_len-i-1] - '0' + y[y_len-i-1] - '0' + ostatok) % 10) + '0';
        ostatok = (x[x_len - i - 1] - '0' + y[y_len - i - 1] - '0' + ostatok) / 10;
        }
 

    if (x_len == y_len) {
        for (int i = min_len; i <= max_len; i++) {
            res1[i] = ((x[x_len - i - 1] - '0' + ostatok) % 10) + '0';
            ostatok = (x[x_len - i - 1] - '0' + ostatok) / 10;
        }
    }
    else if (max_len == x_len) {
        for (int i = min_len; i < max_len; i++) {
            res1[i] = ((x[x_len - i - 1] - '0' + ostatok) % 10) + '0';
            ostatok = (x[x_len - i - 1] - '0' + ostatok) / 10;
        }
    }

    else if  (max_len==y_len) {
        for (int i = min_len; i < max_len; i++) {
            res1[i] = ((y[y_len - i - 1] - '0' + ostatok) % 10) + '0';
            ostatok = (y[y_len - i - 1] - '0' + ostatok) / 10;
        }
    }

    if (ostatok != 0) {
        res1[max_len] = ostatok + '0';
    }

    for (int i = max_len; i >= 0; i--) {
        res[max_len - i] = res1[i];
    }

    return res;
    }

    
