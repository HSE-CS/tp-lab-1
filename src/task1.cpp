#include "task1.h"

unsigned long findValue(unsigned int min, unsigned max){
    bool is_found = false;
    unsigned int var = max;
    while (true){
        for (int del = min; del <= max; del++){
            if (del == 0) continue;
            if (var % del != 0){
                is_found = true;
                break;
            }
        }
        if (!is_found){
            return var;
        } else {
            var += max;
            is_found = false;
        }
    }
}