#include <iostream>
#include "task5.h"
using namespace std;

void split(char ***result, int *N, char *buf, char ch){
    int size=100;
    int pos=0;
    (*result)=new char*[size]();
    for (int i=0;i<size;i++){
        (*result)[i]=new char[size]();
    }
    for (int i=0;buf[i]!='\0';i++){
        if (buf[i]==ch){
            (*result)[(*N)++][pos] = '\0';
            pos = 0;
        }else{
        (*result)[(*N)][pos++] = buf[i];}
    }
    (*N)++;
}