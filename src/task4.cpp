/**
 * @author Stanislav Stoianov
 * @date 11.10.2020
 * @brief char *sum(char *x, char *y) - сумма чисел x и y
 */

#include "../include/task4.h"
#include <malloc.h>
#include <cstring>

char *getString(const char *x, const char *y, int firstLen, int secondLen, int commonLen);

char *sum(char *x, char *y) {
    int firstLen = strlen(x), secondLen = strlen(y);
    int commonLen = firstLen > secondLen ? firstLen : secondLen;
    commonLen++;
    char *buffer = getString(x, y, firstLen, secondLen, commonLen);
    if (buffer[0] != '0' || buffer[1] == '0') return buffer;
    for (auto i = 0; i < commonLen - 1; i++) buffer[i] = buffer[i + 1];
    buffer[commonLen - 1] = '\0';
    return buffer;
}

char *getString(const char *x, const char *y, int firstLen, int secondLen, int commonLen) {
    char *buffer = (char *) malloc(commonLen);
    memset(buffer, ' ', commonLen);
    buffer[commonLen] = '\0';
    int overflow = 0;
    for (auto i = 1; i <= commonLen; i++) {
        int firstTemp = i > firstLen ? 0 : x[firstLen - i] - '0';
        int secondTemp = i > secondLen ? 0 : y[secondLen - i] - '0';
        int resTemp = firstTemp + secondTemp + overflow;
        buffer[commonLen - i] = '0' + resTemp % 10;
        overflow = resTemp / 10;
    }
    return buffer;
}
