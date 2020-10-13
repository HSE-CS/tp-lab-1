/*
 * Написать прототип библиотеки для работы с простыми (prime) числами.
Состав проекта

   - bool checkPrime(unsigned int value) - проверка числа на простоту.
   - unsigned long long nPrime(unsigned n) - нахождение n-ого простого числа (в ряду).
   - unsigned long long nextPrime(unsigned long long value) - нахождение ближайшего следующего простого числа к value.
   - int main() - простая демонстрация (сценарий).
 *
 */
#include <iostream>
#include "task2.h"

int main()
{

    std::cout << checkPrime(29) << std::endl;

    std::cout << nPrime(6) << std::endl;

    std::cout << nextPrime(31) << std::endl;



    return 0;
}
