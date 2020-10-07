#include "task5.h"
#include <iostream>
int main()
{
    char ** result = nullptr;
    char *buf = "123,456,789";
    int N;
    split(&result, &N, buf, ',');
    printf("%d %s", N, result[2]);
    delete result;
}