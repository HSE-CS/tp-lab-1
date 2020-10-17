#define _CRT_SECURE_NO_WARNINGS
#include "task5.h"
#include <malloc.h>

void split(char*** result, int* N, char* buf, char ch) {
    
    int k = 0;
    for (int i = 0;buf[i] != '\0';i++)
        if (buf[i] == ch)
            k++;
    *result = (char**)malloc((k + 1) * sizeof(char**));

    int last = 0;
    int i = 0;
    
    for (;buf[i] != '\0';i++) {
        if (buf[i] == ch) {  
            char* c = (char*)malloc(i - last + 1);
            c[i - last] = '\0';
            for (int j = last;j < i;j++)    
                c[j - last] = buf[j];
            (*result)[(*N)] = c;
            *N = *N + 1;
            last = i + 1;
        }
    }
    
    char* c = (char*)malloc(i - last + 1);  
    c[i - last] = '\0';
    
    for (int j = last;j < i;j++)
        c[j - last] = buf[j];
    (*result)[(*N)] = c;
    *N = *N + 1;
}