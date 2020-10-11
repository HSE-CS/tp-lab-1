/**
 * @author Stanislav Stoianov
 * @date 09.10.2020
 * @brief Написать программу, определяющую, какое самое маленькое положительное целое
   число делится на все числа из диапазона [1...20] без остатка.
 */


#include "../include/task1.h"

unsigned long findValue(unsigned int min, unsigned max) {
    unsigned long long value = 1;
    unsigned int temp;
    while (true) {
        temp = min;
        while (max >= temp) {
            if (value % temp == 0) {
                if (temp == max) return value;
                temp++;
            } else break;
        }
        value++;
    }
}