#include "task5.h"

void split(char ***result, int *N, char *buf, char ch)
{
    char **answer = (char **) malloc(sizeof(char *));
    answer[(*N)] = (char *) malloc(1 * sizeof(char));

    int num = 0;
    for (int i = 0; i < strlen(buf); i++)
    {
        if (buf[i] == ch)
        {
            if (i == 0 || i == strlen(buf) - 1)
                continue;
            if (i < strlen(buf) - 1 && buf[i + 1] == ch)
                continue;
            answer[(*N)] = (char *) realloc(answer[(*N)], (1 + num) * sizeof(char));
            answer[(*N)][num] = '\0';
            num = 0;
            (*N)++;
            answer = (char **) realloc(answer, sizeof(char *) * ((*N) + 1));
            answer[(*N)] = (char *) malloc(1 * sizeof(char));
            continue;
        }
        num++;
        answer[(*N)] = (char *) realloc(answer[(*N)], num * sizeof(char));
        answer[(*N)][num - 1] = buf[i];
    }
    answer[(*N)] = (char *) realloc(answer[(*N)], (1 + num) * sizeof(char));
    answer[(*N)][num] = '\0';
    (*N)+=1;
    (*result) = answer;
}