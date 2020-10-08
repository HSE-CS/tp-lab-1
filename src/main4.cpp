//
//  main1.cpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#include <stdio.h>

#include "task4.h"

#include <iostream>
#include <cstdlib>


using namespace std;


int main() {
    char *x= "99999999999999999999";
    char *y= "1";
    char * a = sum(x, y);
    cout << "Сумма: " << a << "\n";
}

