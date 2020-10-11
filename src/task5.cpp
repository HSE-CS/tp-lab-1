//
// Created by freeb on 11.10.2020.
//

#include <cstring>
#include <cstdlib>
#include "task5.h"

void split(char ***result, int *N, char *buf, char ch) {
    int c = 1;
    for (int j = 0; j < strlen(buf); ++j) {
        if (buf[j] == ch) c++;
    }
    char **res = new char*[c];
    *N = c;
    unsigned int i = 0;
    unsigned int last_sep = -1;
    c = 0;
    while (buf[i] != 0) {
        if (buf[i] == ch){
            char *word = new char [i-last_sep+1];
            for (unsigned int k = last_sep+1; k < i; k++) {
                word[k-last_sep-1] = buf[k];
            }
            word[i-last_sep-1] = 0;
            last_sep = i;
            res[c] = word;
            c++;
        }
        i++;
    }
    char *word = new char[i-last_sep+1];
    for (unsigned int k = last_sep+1; k < i; k++) {
        word[k-last_sep-1] = buf[k];
    }
    word[i-last_sep-1] = 0;
    res[c] = word;
    *result = res;
}
