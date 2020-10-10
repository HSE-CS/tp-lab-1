
#include "task1.h"

unsigned long findValue(unsigned int min,unsigned max){
    unsigned int num = 1;

    while (true) {
        bool b = true;
        for (int i = min; i <= max; i++){
            if (num%i != 0){
                b = false;
                break;
            }
        }
        if (b) {
            return num;
        } else {
            num++;
        }

    }
}
