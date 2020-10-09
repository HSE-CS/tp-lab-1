//
// Created by Алексей Трутнев on 05.10.2020.
//

#include "task5.h"
#include <cstring>
#include <algorithm>
using namespace std;

void split(char*** result, int* N, char* buf, char ch) {
    unsigned count = {0};
    *N = {0};
    for (unsigned i = {0}; i < strlen(buf); i++) if (buf[i] == ch) count++;
    (*result) = new char *[count + 2];
    unsigned len = {0};
    for (unsigned i = {0}; i < strlen(buf); i++)
        if (ch != buf[i]) len++;
        else {
            (*result)[*N] = new char[len + 1];
            strncpy((*result)[*N], buf + i - len, len);
            (*result)[*N][len] = '\0';
            len = {0};
            if (0 == strcmp((*result)[*N], "") ) {
                delete[](*result)[*N];
                (*N)--;
            }
            (*N)++;
        }
    if (0 != len) {
        (*result)[*N] = new char[len+1];
        strncpy((*result)[*N], buf + strlen(buf) - len, len);
        (*result)[*N][len] = '\0';
        if (0 == strcmp((*result)[*N], "")) {
            delete[](*result)[*N];
            (*N)--;
        }
        (*N)++;
    }
}