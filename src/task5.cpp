#include <cstring>
#include <iostream>
#include "task5.h"
using namespace std;

char * substr(char * str, int s, int f){

    char * result = new char[f-s-1];
    //cout << s << ' ' << f << '\n';

    int rc = 0;
    for (int i=s; i<f; i++){
        result[rc] = str[i];
        rc++;
    }
    result[rc]='\0';

    return result;
}

void split(char ***result, int *N, char *buf, char ch){

    int len =0;
    while (buf[len]) len++;

    (*result) = new char* [len]();
    for (int i = 0; i < len; i++) (*result)[i] = new char[len]();

    int ws = 0;
    for (int i=0; i<len+1;i++){
        if (buf[i]==ch || i==len){

            char * word = substr(buf,ws,i);
            (*result)[*N] = word;

            (*N)++;
            ws = i+1;
        }
    }

}