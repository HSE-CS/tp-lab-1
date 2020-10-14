#include "task4.h"

char * sum(char *x, char *y){
    int size_x = strlen(x);
    int size_y = strlen(y);
    int size = max(size_x, size_y);

    if ((x[0] - '0') + (y[0] - '0') > 9){
        size++;
    }

    char *sum = new char [size];

    int del = 0;
    for (int i = size_x-1, j = size_y-1, k = size-1; i != -1 && j != -1; i--, j--, k--){
        sum[k] = '0' + (x[i] + y[j] + del - 96) % 10;
        del = (x[i] + y[j] + del - 96) / 10;
    }

    if (size_x > size_y){
        for (int i = size_x - size_y; i != -1; i--){
            sum[i] = '0' + (x[i] + del - 48) % 10;
            del = (x[i] + del - 48) / 10;
        } 
    }

    if (size_y > size_x){
        for (int i = size_y - size_x; i != -1; i--){
            sum[i] = '0' + (y[i] + del - 48) % 10;
            del = (y[i] + del - 48) / 10;
        } 
    }

    if (del){
        sum[0]=del+'0';
    }
    
    return sum;
}