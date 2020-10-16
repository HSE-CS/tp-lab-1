//
//  main4.cpp
//  programming-technologies
//
//  Created by Даниил Иванов on 12.10.2020.
//  Copyright © 2020 Daniil Ivanov. All rights reserved.
//

#include <stdio.h>
#include "task4.hpp"
#include <string.h>
int main() {
    char x[]{ "12345678901234567" };
    char y[]{ "12345678901234567" };
    char *res = sum(x, y);
    for (int i = 0; i < strlen(res); i++)
    {
        cout << res[i];
    }
    cout << endl;
    free(res);
}

