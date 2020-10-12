#include <string>

void split(char ***result, int *N, char *buf, char ch) {
    int SIZE = strlen(buf);
    int j = 0;
    (*N) = 0;

    (*result) = new char*[SIZE]();
    for (unsigned int i = 0; i < SIZE; i++) {
        (*result)[i] = new char[SIZE]();
    }
    for (unsigned int i = 0; i < strlen(buf); i++){
        if (buf[i] == ch) {
            (*result)[(*N)++][j] = '\0';
            j = 0;
        }
        else
            (*result)[(*N)][j++] = buf[i];
    }
    (*N)++;
}

