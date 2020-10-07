#include "task5.h"
#include <cstring>
#include <iostream>

void split(char ***result, int *N, char *buf, char ch)
{
    *result = new char *[1000];
    unsigned len = strlen(buf);
    int lastSumb = 0, count = 0, str = 0;
    char * myBuf = new char[len+1];
    strcpy(myBuf, buf);
    for(unsigned i = 0; i < len; i++)
        if(buf[i] == ch)
        {
            myBuf[i] = 0;
            (*result)[str] = new char[256];
            sprintf((*result)[str++], "%s", myBuf+lastSumb);
            lastSumb = i+1;
            count++;
        }
    (*result)[str] = new char[256];
    sprintf((*result)[str++], "%s", myBuf+lastSumb);
    count++;
    *N =count;
}