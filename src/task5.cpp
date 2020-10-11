/**
 * @author Stanislav Stoianov
 * @date 12.10.2020
 * @brief void split(char ***result, int *N, char *buf, char ch) -
 * разбиение строки buf на подстроки и запись результата в result, с присвоением
 * по адресу N количества полученных подстрок.
 */

#include <cstring>
#include "../include/task5.h"

void split(char ***result, int *N, char *buf, char ch) {
    int count = 1, i = 0;
    while (i < strlen(buf)) if (buf[i] == ch) count++, i++;
    (*N) = count, count = 0;
    (*result) = new char *[*N];

    for (int k = 0; k < *N; k++) (*result)[k] = new char[strlen(buf)], (*result)[k][0] = '\0';

    int len, start = 0;
    for (int k = 0; k <= strlen(buf); k++) {
        if (ch != buf[k] && strlen(buf) != k) continue;
        len = k - start;
        for (int j = 0; j < len; j++) (*result)[count][j] = buf[start], start++;
        (*result)[count][len] = '\0';
        count += 1;
        start = k + 1;
    }
}