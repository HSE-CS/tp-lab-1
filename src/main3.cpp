//
//  main1.cpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#include <stdio.h>
#include "task3.h"
#include "task2.h"

#include <iostream>
#include <cstdlib>


using namespace std;


int main() {
    unsigned long long a = sumPrime(2000000);
    cout << "Сумма простых чисел до 2'000'000: " << a;
}

