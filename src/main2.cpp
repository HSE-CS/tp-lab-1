//
//  main1.cpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#include <stdio.h>
#include "task2.h"

#include <iostream>
#include <cstdlib>


using namespace std;


int main() {
    cout << "23 простое: " << checkPrime(23) << "\n";
    cout << "Первое простое число: " << nextPrime(1) << "\n";
    cout << "500е простое число: " << nPrime(500) << "\n";
}

