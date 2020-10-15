#include <string>

void split(char ***result, int *N, char *buf, char ch) {

    const int len = 1000;
    const int lenB = 100;
    int j = 0;
    int poz = 0;

    *result = new char *[len];
    *result[0] = new char[lenB];

    for (int i = 0; i < strlen(buf); i++) {
        if (buf[i] == ch) {
            j++;
            (*result)[j][poz] = '\0';
            poz = 0;
            continue;
        }
        (*result)[j][poz] = buf[i];
        poz++;
    }
}