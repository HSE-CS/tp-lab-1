#include "task5.h"
#include <iostream>
int main()
{
    char ** result = new char * [1000];
    char *buf = "lol kek char";
    int N;
    split(&result, &N, buf, ' ');
    printf("%d %s", N, result[2]);
    delete result;
}