//
//  task3.cpp
//  programming-technologies
//
//  Created by Даниил Иванов on 12.10.2020.
//  Copyright © 2020 Daniil Ivanov. All rights reserved.
//

#include "task3.h"

unsigned long long sumPrime(unsigned int hbound)
{
    unsigned long long n{ 0 };
    for (int i = 2; i < hbound; i++)
    {
        if (checkPrime(i))
            n += i;
    }
    return n;
}
