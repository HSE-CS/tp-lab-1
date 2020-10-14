// Найти сумму всех простых чисел, меньше двух миллионов

#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "task3.h"

int main() {

	unsigned int hbound = 0;

	printf("Enter hbound: ");
	scanf("%u", &hbound);
	printf("Sum: %llu", sumPrime(hbound));

	return 0;
}