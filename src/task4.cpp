#include <string.h>
#include <iostream>
#include "task4.h"

using namespace std;

char * sum(char *x, char *y){
    int sizeOfX = strlen(x);
    int sizeOfY = strlen(y);
    int cnt = 0;
    int maxSize = max(strlen(x), strlen(y));
    char *arr = new char[maxSize+1];
    char *tmp = new char[maxSize];

    if (sizeOfX > sizeOfY){
        for (int i = 0; i < sizeOfX - sizeOfY; ++i) 
            tmp[i] = '0';
        for (int j = 0; j < sizeOfY; ++j) 
            tmp[sizeOfX - sizeOfY + j] = y[j];
        y = tmp;
    }


    if (sizeOfY > sizeOfX){
        for (int i = 0; i < sizeOfY - sizeOfX; ++i) 
            tmp[i] = '0';
        for (int j = 0; j < sizeOfX; ++j) 
            tmp[sizeOfY - sizeOfX + j] = x[j];
        x = tmp;
    }


    for (int i = maxSize-1; i > -1; --i) {
        arr[i] = x[i] + y[i] + cnt - '0';
        cnt = 0;
        if (arr[i] > 57){
            arr[i] = arr[i] - 10;
            cnt++;

            if (i == 0 && cnt > 0){
                for (int i = maxSize; i > -1; --i)
                    arr[i] = arr[i-1];
                arr[0] = '1';
            }
        }
        if (i == 0 && cnt == 0)
            arr[maxSize] = '\0';

    }


    delete [] tmp;
    return arr;
}