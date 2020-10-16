//
//  task1.cpp
//  laba
//
//  Created by Anastasiya Rogozyan on 16.10.2020.
//  Copyright © 2020 Anastasiya Rogozyan. All rights reserved.
//


#include <iostream>
using namespace std;
#include "../include/task1.h"

unsigned long findValue(unsigned int min,unsigned max) {
    unsigned long num = min * max;
    while(true) {
        unsigned int dels = 0;
        for(unsigned int i = min; i <= max; i++)
            if(num % i == 0)
                dels++;
        if (dels == (max - min + 1)) {
            return num;
        }
        num++;
    }

} 
