#include "task4.h"

char * sum(char *x, char *y){
    int size_x = strlen(x);
    int size_y = strlen(y);
    int size = max(size_x, size_y);

    if ((x[0] - '0') + (y[0] - '0') > 9){
        size++;
    }

    char *sum = new char [size];
    memset(sum, '0', size*sizeof(char));
    
    for (int i = size_x-1, j = size_y-1, k = size-1; i != -1 || j != -1; i--, j--, k--){
        sum[k-1] = sum[k-1] + (x[i] + y[j] - 96) / 10;
        sum[k] = sum[k] + (x[i] + y[j] - 96) % 10;
    }
    
    if (size_x > size_y){
        for (int i = size_x - size_y - 1; i != -1; i--){
            sum[i] = sum[i] + x[i] - '0';
        } 
    }
    if (size_y > size_x){
        for (int i = size_y - size_x; i != -1; i--){
            sum[i] =sum[i] + y[i] - '0';
        } 
    }
    
    return sum;
}