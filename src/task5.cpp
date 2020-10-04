
#include "task5.h"

using namespace std;

void split(char ***result, int *N, char *buf, char ch) {
    char **result1 = (char **) malloc(sizeof(char *));
    result1[(*N)] = (char *) malloc(1 * sizeof(char));

    int nlet = 0;
    for (int i = 0; i < strlen(buf); i++) {
        if (buf[i] == ch) {
            if (i == 0 || i == strlen(buf) - 1)
                continue;
            if (i < strlen(buf) - 1 && buf[i + 1] == ch)
                continue;
            result1[(*N)] = (char *) realloc(result1[(*N)], (1 + nlet) * sizeof(char));
            result1[(*N)][nlet] = '\0';
            nlet = 0;
            (*N)++;
            result1 = (char **) realloc(result1, sizeof(char *) * ((*N) + 1));
            result1[(*N)] = (char *) malloc(1 * sizeof(char));
            continue;
        }
        nlet++;
        result1[(*N)] = (char *) realloc(result1[(*N)], nlet * sizeof(char));
        result1[(*N)][nlet - 1] = buf[i];

    }
    result1[(*N)] = (char *) realloc(result1[(*N)], (1 + nlet) * sizeof(char));
    result1[(*N)][nlet] = '\0';
    (*result) = result1;
}