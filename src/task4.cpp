//
//  task4.cpp
//  programming-technologies
//
//  Created by Даниил Иванов on 12.10.2020.
//  Copyright © 2020 Daniil Ivanov. All rights reserved.
//

#include "task4.h"
#include <string.h>

char* sum(char* x, char* y)
{
    char* result{ 0 };
    int lenx{ int(strlen(x)) }, leny{ int(strlen(y)) }, remember{ 0 };
    if (lenx >= leny) {
        char* fake_y = new char[lenx+1]; 
        if (fake_y) {
            int zeros = lenx - leny - 1;
            for (int i = 0; i < lenx+1; i++)
            {
                if (i == lenx)
                    fake_y[i] = '\0';
                if (i > zeros)
                    fake_y[i] = y[i-zeros-1];
                else
                    fake_y[i] = '0';
            }
        }

        result = new char [lenx+2] ;
        for (int i = 0; i < lenx+2; i++) {
            if (i == lenx+1)
                result[i] = '\0';
            else
                result[i] = '0';
        }
        for (int i = lenx-1; i > -1 ; i--)
        {
            char a{ x[i] }, b{ fake_y[i] };
            int temp{ (a - '0' + b - '0') + remember };
            result[i+1] = (temp % 10) + '0';
            remember = temp / 10;
        }
        delete(fake_y);
        if (remember == 1) {
            result[0] = '1';
            return result;
        }
        else
            return result+1;
        
    }
    else {
        char* fake_x = new char [leny+1];
        for (int i = 0; i < leny+1; i++)
        {
            if (i >= lenx)
                fake_x[i] = '0';
            else
                fake_x[i] = x[i];
        }

        result = new char [leny+1];
        for (int i = 0; i < leny + 1; i++)
            result[i] = 0;

        for (int i = lenx - 1; i > -1; i--)
        {
            char a{ fake_x[i] }, b{ y[i] };
            int temp{ (a - '0' + b - '0') + remember };
            result[i] = (temp % 10) + '0';
            remember = temp / 10;
        }
        if (remember == 1)
            result[lenx + 1] = 1;
        delete(fake_x);
    }
    return result;
}
