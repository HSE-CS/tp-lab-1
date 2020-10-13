#include "task4.h"
#include <stdlib.h>
#include <string.h>

char *sum(const char *x, const char *y){
    int x_len = strlen(x);
    int x_pos = x_len-1;
    int y_len = strlen(y);
    int y_pos = y_len-1;
    int max_len = (x_len > y_len ? x_len : y_len);
    int carry = 0;
    char *z = new char[max_len+2];
    for (int i = 0; i < max_len; ++i){
        int sum = 0;
        if (x_pos < 0){
            sum = y[y_pos]-0x30;
        } else if (y_pos < 0){
            sum = x[x_pos]-0x30;
        } else {
            sum = y[y_pos]-0x30 + x[x_pos]-0x30;
        }
        sum += carry;
        z[max_len-i] = (sum%10)+0x30;
        carry = sum/10;
        x_pos -= 1;
        y_pos -= 1;
    }
    if (carry == 0){
        memcpy(z, z+1, max_len+1);
        z[max_len] = '\0';
    } else {
        z[0] = carry+0x30;
        z[max_len+1] = '\0';
    }
    return z;
}