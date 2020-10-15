#include "task4.h"
#include <stdlib.h>
#include <string.h>

char* sum(const char* x1, const char* x2) {
    int x1_len = strlen(x1), x1_pos = x1_len - 1;
    int x2_len = strlen(x2), x2_pos = x2_len - 1;
    int max_len = (x1_len > x2_len ? x1_len : x2_len);
    int carry = 0;
    char* z = new char[max_len + 2];
    for (int i = 0; i < max_len; ++i) {
        int sum = 0;
        if (x1_pos < 0) {
            sum = x2[x2_pos] - 0x30;
        }
        else if (x2_pos < 0) {
            sum = x1[x1_pos] - 0x30;
        }
        else {
            sum = x2[x2_pos] - 0x30 + x1[x1_pos] - 0x30;
        }
        sum += carry;
        z[max_len - i] = (sum % 10) + 0x30;
        carry = sum / 10;
        x1_pos -= 1;
        x2_pos -= 1;
    }
    if (carry == 0) {
        memmove(z, z + 1, max_len + 1);
        z[max_len] = '\0';
    }
    else {
        z[0] = carry + 0x30;
        z[max_len + 1] = '\0';
    }
    return z;
}