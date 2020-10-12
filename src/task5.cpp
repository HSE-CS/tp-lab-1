#include "task5.h"

void split(char ***result, int *N, char *buf, char ch) {
    *N = 0;
    for (int i = 0; i < strlen(buf); i++) {
        if (buf[i] == ch)
            (*N)++;
    }
    (*N)++;
    int* sizes= new int[*N];
    int counter=0, long_counter=0;
    for(int i=0;i<strlen(buf-1);i++){
        long_counter++;
        if(buf[i]==ch)
            sizes[counter]=i;
            counter++;
            long_counter=0;
    }
    sizes[counter] +=1;
    *result= new char*[*N];
    for(int i=0;i<(*N);i++){
        (*result)[i]= new char [sizes[i]];
    }
    counter=0;
    long_counter=0;
    for(int i=0;i<strlen(buf);i++){
        if (buf[i]==ch){
            (*result)[counter][long_counter] = '\0';
            counter++;
            long_counter=0;}
        else{
            (*result)[counter][long_counter]=buf[i];
            long_counter++;
        }
    }
    (*result)[counter][long_counter] = '\0';
}