//
//  main1.cpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#include <stdio.h>
#include "task1.h"

#include <iostream>
#include <cstdlib>


using namespace std;

int main() {
    int a = findValue(1, 20);
    cout << "Cамое маленькое положительное целое число делится на все числа из диапазона [1...20] без остатка:\n" << a << "\n";
}
