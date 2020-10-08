//
//  main1.cpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#include <stdio.h>

#include "task5.h"

#include <iostream>
#include <cstdlib>


using namespace std;


int main() {
    char *buf="123,456,789";
    int N=0;
    char **result=nullptr;
    split(&result, &N, buf, ',');
    
    cout << "New string: " << result[0] << " " << result[1] << " " << result[2] << "\n";
}

