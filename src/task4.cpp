#include "task4.h"
#include <iostream>
#include <algorithm>
#include <cstring>


using namespace std;

char* sum(char* x, char* y)
{
    int x_len = strlen(x);
    int y_len = strlen(y);
    int max_len = max(x_len, y_len);
    int min_len = min(x_len, y_len);
    int ostatok = 0;
    int razn = max_len - min_len;

    char* res = (char*)calloc(max_len, sizeof(char*));
    char* res1 = (char*)calloc(max_len, sizeof(char*));



    for (int i = 0; i<min_len; i++) {
        res1[i] = ((x[x_len-i-1] - '0' + y[y_len-i-1] - '0' + ostatok) % 10) + '0';
        ostatok = (x[x_len - i - 1] - '0' + y[y_len - i - 1] - '0' + ostatok) / 10;
        }
 


    if (max_len == x_len) {
        for (int i = min_len; i < max_len; i++) {
            res1[i] = ((x[max_len - i - 1] - '0' + ostatok) % 10) + '0';
            ostatok = (x[max_len - i - 1] - '0' + ostatok) / 10;
        }
    }


    else if (max_len==y_len){
        for (int i = min_len; i < max_len; i++) {
            res1[i] = ((y[max_len - i - 1] - '0' + ostatok) % 10) + '0';
            ostatok = (y[max_len - i - 1] - '0' + ostatok) / 10;
        }

    }

   if (ostatok != 0) res1[max_len] = ostatok + '0';

   int len = strlen(res1);

    for (int i = len + 1; i >= 0; i--) {
        res[len - i-1] = res1[i];
    }

    free(res1);

    return res;
    }