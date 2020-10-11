//
// Created by freeb on 11.10.2020.
//

#include <string>
#include <cstring>
#include "task4.h"

char *sum(char *x, char *y) {
    unsigned int lx = strlen(x), ly = strlen(y);
    char *word = new char[std::max(lx,ly)];
    unsigned int remainder = 0, i = 0;
    while (i <= std::max(lx, ly)) {
        if (i < std::min(lx, ly)) {
            word[i] = (char) (((int)(x[lx-i-1]-48) + (int)(y[ly-i-1]-48) + remainder) % 10 + 48);
            if ((int)(x[lx-i-1]-48) + (int)(y[ly-i-1]-48) + remainder >= 10) {
                remainder = ((int) (x[lx - i - 1] - 48) + (int) (y[ly - i - 1] - 48) + remainder) / 10;
            } else {
                remainder = 0;
            }
        } else if (i < std::max(lx, ly)){
            if (lx > ly) {
                word[i] = (char) (((int)(x[lx-i-1]-48) + remainder) % 10 + 48);
                remainder = ((int)x[lx-i-1]-48 + remainder)/10;
            } else {
                word[i] = (char) (((int)y[ly-i-1]-48) % 10 + remainder + 48);
                remainder = (int)((y[ly-i-1]-48)/10);
            }
        } else if (remainder != 0) {
            word[i] = (char)(remainder + 48);
        } else {
            word[i] = 0;
        }
        i++;
    }
    word[i] = 0;
    char *result = new char [strlen(word)+1];
    for (int j = 0; j < strlen(word); j ++) {
        result[j] = word[strlen(word)-j-1];
    }
    result[strlen(word)] = 0;
    return result;
}
