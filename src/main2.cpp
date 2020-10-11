/**
 * @author Stanislav Stoianov
 * @date 09.10.2020
 */

#include <cstdio>
#include "../include/task2.h"

int main() {
    printf("%d\n", checkPrime(2));
    printf("%d\n", checkPrime(3));
    printf("%d\n", checkPrime(12));
    printf("%d\n", nPrime( 6) == 13);
    printf("%d\n", nPrime( 500) == 3571);
    printf("%llu\n", nextPrime( 1031));
    printf("%d\n", nextPrime( 1031) == 1033);
    printf("%llu\n", nextPrime( 3559));
    printf("%d\n", nextPrime( 3559) == 3571);
    printf("%llu\n", nextPrime( 2));
    printf("%d\n", nextPrime( 2) == 3);
    return 0;
}

