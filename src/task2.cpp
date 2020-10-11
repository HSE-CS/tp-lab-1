/**
 * @author Stanislav Stoianov
 * @date 09.10.2020
 * @brief Написать прототип библиотеки для работы с простыми (prime) числами
 * bool checkPrime(unsigned int value) - проверка числа на простоту
 * unsigned long long nPrime(unsigned n) - нахождение n-ого простого числа (в ряду)
 * unsigned long long nextPrime(unsigned long long value) - нахождение ближайшего следующего простого числа к value
 */

#include "../include/task2.h"
#include <cmath>

bool checkPrime(unsigned int value) {
    for (unsigned int i = 2; i <= sqrt(value); i++) if (value % i == 0) return false;
    return true;
}

unsigned long long nPrime(unsigned n) {
    unsigned long long int value = 1;
    int i = 0;
    while (i < n) if (checkPrime(++value)) ++i;
    return value;
}

unsigned long long nextPrime(unsigned long long value) {
    while (true) if (checkPrime(++value)) return value;
}