//
//  main1.cpp
//  laba
//
//  Created by Anastasiya Rogozyan on 16.10.2020.
//  Copyright © 2020 Anastasiya Rogozyan. All rights reserved.
//


#include "../include/task3.h"

unsigned long long sumPrime(unsigned int hbound) {
    unsigned long long sum = 0;
    for(unsigned int v = 2; v < hbound; v++) {
        int dels = 0;
        for(unsigned int i = 2; i < v; i++) {
            if(v % i == 0)
                    dels++;
            if(dels > 0)
                break;
        }
        if(dels == 0) {
            sum += v;
        }
    }
    return sum;
} 
