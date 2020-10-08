//
//  task1.cpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#include "task2.h"

bool checkPrime(unsigned int value){
    for (int delimetr = 2; delimetr < value; delimetr++){
        if (value % delimetr == 0)
            return false;
    }
    return true;
}

unsigned long long nPrime(unsigned n){
    int prime_index = 0;
    unsigned long long cur_prime = 1;
    while (prime_index < n){
        cur_prime = nextPrime(cur_prime);
        prime_index++;
    }
    return cur_prime;
}


unsigned long long nextPrime(unsigned long long value){
    while(!checkPrime(++value));
    return value;
}
