//
// Created by Алексей Трутнев on 05.10.2020.
//

#include "task1.h"

unsigned long findValue(unsigned int min, unsigned max){
    unsigned k = max;
    while(true){
        int check = {0};
        for (int i = min; i <= max; i++) if ( 0 == k % i) check++;
        if (max - min + 1 == check) return k;
        else k++;
    }
}