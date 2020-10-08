//
//  task1.cpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#include "task4.h"
#include <stdio.h>
#include <string.h>

char * sum(char *x, char *y){
    unsigned int size1 = strlen(x);
    unsigned int size2 = strlen(y);

    unsigned int sizeBigger = (size1 > size2) ? size1 : size2;
    sizeBigger++;
    
    unsigned int * num1 = new unsigned int [sizeBigger];
    unsigned int * num2 = new unsigned int [sizeBigger];
    unsigned int * temp_sum = new unsigned int [sizeBigger];
    
    int i1 = size1 - 1;
    int i2 = size2 - 1;
    for (int i = 0; i < sizeBigger; i++){
        num1[i] = (i1 >= 0) ? (x[i1--]-'0') : 0;
        num2[i] = (i2 >= 0) ? (y[i2--]-'0') : 0;

    }
    int left = 0;
    for (int i = 0; i < sizeBigger; i++){
        int sum = num1[i] + num2[i] + left;
        int new_digit = sum % 10;
        left = sum / 10;

        temp_sum[i] = new_digit;
        
    }
    
//    printf("%d%d%d", temp_sum[0], temp_sum[1],temp_sum[2]);
    int end_size = (temp_sum[sizeBigger-1] == 0) ? sizeBigger - 1 : sizeBigger;
    char * end_sum = new char [end_size];
    for (int i = 0; i < end_size; i++){
        end_sum[i] = temp_sum[sizeBigger - 1 - i] + '0';
    }
    
    return end_sum;
}
