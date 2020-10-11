/**
 * @author Stanislav Stoianov
 * @date 09.10.2020
 * @brief unsigned long long sumPrime(unsigned int hbound) - сумма всех чисел до hbound (не включая его)
 */

#include "../include/task3.h"
#include "../include/task2.h"

unsigned long long sumPrime(unsigned int hbound) {
    unsigned long long value = 0;
    for (unsigned long long i = 2; i < hbound; i++) if (checkPrime(i)) value += i;
    return value;
}
