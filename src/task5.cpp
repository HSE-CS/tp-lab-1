#include <string>
#include <cstring>
#include <cstdlib>

void split(char ***result, int *N, char *buf, char ch) {

    const int len = 1000;
    int j = 0;
    int poz = 0;
    (*N) = 0;
    int bbf = strlen(buf);

    *result = new char* [len];

    for (int i = 0; i < len; i++){
        (*result)[i] = new char[len];
    }

    for (int i = 0; i < bbf; i++) {
        if (buf[i] == ch) {
            (*result)[j][poz] = '\0';
            j++;
            (*N)++;
            poz = 0;
            continue;
        }
        (*result)[j][poz] = buf[i];
        poz++;
    }
}