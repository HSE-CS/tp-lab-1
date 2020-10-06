#ifndef TASK1_H
#define TASK1_H

#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

bool checkPrime(unsigned int value); // - проверка числа на простоту.
unsigned long long nPrime(unsigned n); // - нахождение n - ого простого числа(в ряду).
unsigned long long nextPrime(unsigned long long value); // - нахождение ближайшего следующего простого числа к value.
#endif TASK1_H