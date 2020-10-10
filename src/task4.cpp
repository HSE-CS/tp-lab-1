#include "task4.h"

char * sum(char *x, char *y) {
    int maxlen = strlen(x) > strlen(y) ? strlen(x) : strlen(y);
    char *s = new char[maxlen + 1];
    for (int i = 0; i < maxlen + 1; ++i) {
        s[i] = '0';
    }
    for (int i = 0; i < maxlen; i++) {
        int num = 0;
        if (i < strlen(x)) {
            num += x[strlen(x) - 1 - i] % 48;
        }
        if (i < strlen(y)) {
            num += y[strlen(y) - 1 - i] % 48;
        }
        num += s[i] % 48;
        s[i] = (char) (num % 10 + 48);
        s[i + 1] = (char) (num / 10 + 48);
    }
    int len = (s[maxlen] == '0') ? maxlen: maxlen + 1;
    char *res = new char[len+1];
    for (int i = 0; i < len; i++){
        res [i] = s[len-1-i];
    }
    res[len] = '\0';
    delete[](s);
    return res;


}
