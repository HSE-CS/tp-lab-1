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
    int stringLen = strlen(buf), k = 0, count = 1;
    for (int i = 0; i < stringLen; i++) if (buf[i] == ch) count++;
    *N = count, count = 0;
    (*result) = new char *[*N];
    for (auto i = 0; i < *N; i++) {
        (*result)[i] = new char[stringLen];
        (*result)[i][0] = '\0';
    }
    for (auto i = 0; i <= stringLen; i++) {
        if (i != stringLen && buf[i] != ch) continue;
        int word_length = i - k;
        for (int j = 0; j < word_length; j++) (*result)[count][j] = buf[k++];
        (*result)[count++][word_length] = '\0';
        k = i + 1;
    }
}