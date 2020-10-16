//
//  main1.cpp
//  laba
//
//  Created by Anastasiya Rogozyan on 16.10.2020.
//  Copyright © 2020 Anastasiya Rogozyan. All rights reserved.
//


#include <iostream>
#include <malloc.h>
#include <cstring>
#include "../include/task5.h"

using namespace std;

int main() {
    char *buf="123,456,789";
    char ch = ',';
    int N = 0;
    char **result=nullptr;
    split(&result, &N, buf, ch);
    cout<<result[0]<<endl<<result[1]<<endl<<result[2]<<endl;
    return 0;
} 
