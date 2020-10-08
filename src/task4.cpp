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
    sizeBigger += 2;
    
    unsigned int * num1 = new unsigned int [sizeBigger];
    unsigned int * num2 = new unsigned int [sizeBigger];
    char * temp_sum = new char [sizeBigger];
    
    for (int i = 0; i < sizeBigger; i++)
        temp_sum[i] = '\0';
    
    int i1 = size1 - 1;
    int i2 = size2 - 1;
    for (int i = 0; i < sizeBigger; i++){
        num1[i] = (i1 >= 0) ? (x[i1--]-'0') : 0;
        num2[i] = (i2 >= 0) ? (y[i2--]-'0') : 0;

    }
    int left = 0;
    for (int i = 0; i < sizeBigger - 1; i++){
        int sum = num1[i] + num2[i] + left;
        int new_digit = sum % 10;
        left = sum / 10;
        char c = new_digit + '0';
        temp_sum[i] = c;
        
    }
    
//    printf("%d%d%d", temp_sum[0], temp_sum[1],temp_sum[2]);
    int end_size = (temp_sum[sizeBigger-2] == '0') ? sizeBigger - 1 : sizeBigger;
    char * end_sum = new char [end_size];
    for (int i = 0; i < end_size; i++)
        end_sum[i] = '\0';
    
    for (int i = 0; i < end_size - 1; i++){
        end_sum[i] = temp_sum[end_size - 2 - i];
    }
    
    return end_sum;
}
