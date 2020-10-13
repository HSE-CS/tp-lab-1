/*
 Найти сумму всех простых чисел, меньше двух миллионов.
Состав проекта

  - unsigned long long sumPrime(unsigned int hbound) - сумма всех чисел до hbound (не включая его)
  - main()
Файлы: task2.h, task2.cpp, task3.h, task3.cpp, main3.cpp
 */

#include <iostream>
#include "task2.h"
#include "task3.h"

int main() {
    std::cout << sumPrime(2000000) << std::endl;
    return 0;
}
