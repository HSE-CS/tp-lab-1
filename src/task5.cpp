#include "task5.h"
#include <iostream>
#include <cstring>

using namespace std;

void split(char ***result, int *N, char *buf, char ch){
    unsigned int sizeOfStr = strlen(buf);
     int cnt = 1;
    for (int i = 0; i < sizeOfStr; i++)
        if (buf[i] == ch)
            cnt++;
    *N = cnt;
    cnt = 0;

    (*result) = new char* [*N];

    
    for (int i = 0; i < *N; i++){
        (*result)[i] = new char[sizeOfStr];
        (*result)[i][0] = '\0';
    }
    
    int cnt_word = 0;
    for (int i = 0; i <= sizeOfStr; i++){
        if (buf[i] == ch || i == sizeOfStr){
            int sizeOfWord = i - cnt_word;
                  for (int j = 0; j < sizeOfWord; j++)
                      (*result)[cnt][j] = buf[cnt_word++];
                  
                  (*result)[cnt++][sizeOfWord] = '\0';
                  cnt_word = i + 1;
        }
    }

}