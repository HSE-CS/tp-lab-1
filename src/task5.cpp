#include "task5.h"

void split(char ***result, int *N, char *buf, char ch){
     for (int i = 0; i < strlen(buf); i++){
        if (buf[i] == ch){
            (*N)++;
        }
    }
    (*N)++;

    (*result) = new char*[*N];
    for (int i = 0; i < (*N); i++){
        (*result)[i] = new char[strlen(buf)];
    }
    
    int count = -1;
    for (int i = 0; i < (*N); i++){
        count++;
        for (int j = 0; buf[count] != ch && buf[count] != '\0'; j++){
            (*result)[i][j] = buf[count];
            (*result)[i][j+1] = '\0';
            count++;
        }
    }
}