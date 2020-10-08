//
//  task1.cpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#include "task3.h"
#include "task2.h"
#define max 2000001

// ****
// Решето Эратосфена
// ****
// порядковое число до 5000-го
// ****

unsigned int *getAllPrime(){
    int counter = 0;
    
    //заполняем единицами
    unsigned int * num_array = new unsigned int[max];
    for (int i = 0; i < max; i++){
        num_array[i] = 1;
    }
    
    num_array[0] = 0;
    num_array[1] = 0;

    for(int k=2; k*k< max; k++){
        // если k - простое (не вычеркнуто)
        if(num_array[k]==1){
            // то вычеркнем кратные k
            for(int l=k*k; l < max; l+=k)
                num_array[l]=0;
        }
    }
    
    return num_array;
}


unsigned long long sumPrime(unsigned int hbound){
    unsigned long long sum = 0;

    unsigned int *my_array = getAllPrime();
    for (int i = 0; i <= hbound; i++){
        if (my_array[i])
            sum += i;
    }
    return sum;
}


