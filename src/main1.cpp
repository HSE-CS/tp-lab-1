// Написать программу, определяющую, какое самое маленькое положительное целое
// число делится на все числа из диапазона[1...20] без остатка.

#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "task1.h"

int main() {
	
	int min = 1;
	int max = 20;

	printf("Answer: %lu", findValue(min, max));

	return 0;
}