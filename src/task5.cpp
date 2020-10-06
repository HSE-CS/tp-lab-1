//
// Created by sharg on 06.10.2020.
//
#include "task5.h"
void split(char ***result, int *N, char *buf, char ch){
    *N=0;
    int tempChar=0;
    *result =new char*[*N];
    (*result)[*N]=new char[strlen(buf)];
    for(int iter=0;iter<strlen(buf);iter++){
        if(buf[iter]==ch){
            (*N)++;
            (*result)[*N]=new char[strlen(buf)];
            tempChar=0;
        }
        else{
            (*result)[*N][tempChar]=buf[iter];
            tempChar++;
        }
    }
}