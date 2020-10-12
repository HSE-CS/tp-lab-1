#include "task5.h"
#include <iostream>
int main()
{
    //char **ptrarray = new char* [];
    char *buf="123,456,789";
    int N=0;
    char **result=nullptr;
    split(&result, &N, buf, ',');
    for(int i = 0; i < strlen(*result); i++)
    {
        printf("%s", *result);
    }
    return 0;
}