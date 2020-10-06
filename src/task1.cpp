//
// Created by victor on 06.10.2020.
//
#include "task1.h"

unsigned long findValue(unsigned int min,unsigned max){
    unsigned long num = max;
    unsigned delitel = min;
    while (delitel <= max){
        if (num % delitel == 0){
            delitel++;
        }else{
            num++;
            delitel=min;
        }
    }
    return num;
}
