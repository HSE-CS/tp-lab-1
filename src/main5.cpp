//
//  main5.cpp
//  programming-technologies
//
//  Created by Даниил Иванов on 12.10.2020.
//  Copyright © 2020 Daniil Ivanov. All rights reserved.
//

#include <stdio.h>
#include "task5.h"
#include <string.h>

int main() {
    char*** result = 0;
    result = (char***)malloc(sizeof(char**));
    int n{ 0 }, *N = &n;
    char buf[] { "Hello" };
    char ch{ 0 };
    
    split(result, N, buf);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < strlen((*result)[i]); j++)
        {
            cout << (*result)[i][j];
        }
        cout << endl;
    }
    return 0;
}

