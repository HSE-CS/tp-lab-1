#include "task1.h"

unsigned long findValue(unsigned int min,unsigned max){
    int res = 1, flag = 0;
    while (flag != 1) {
        flag = 1;
        for (int i = min; i <= max && flag == 1; i++) {
            if (res % i != 0){
                flag = 0;
                res++;
            }
        }

    }
    return res;
}