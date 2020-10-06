#include <iostream>
#include "task3.h"
#include "task2.h"
#define MAX 2000000

unsigned int* getAllPrimeNumbers() {
	unsigned int* num_array = new unsigned int[MAX];

	for (int i = 0; i < MAX; i++)
	{
		num_array[i] = 1;
	}

	num_array[0] = 0;
	num_array[1] = 0;

	for (int i = 2; i * i < MAX; i++)
	{
		if (num_array[i] == 1)
		{
			for (int j = i * i; j < MAX; j += i)
				num_array[j] = 0;
		}
	}

	return num_array;
}

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long sum = 0;
	unsigned int* num_array = getAllPrimeNumbers();
	for (int i = 0; i < MAX; i++)
		if (num_array[i])
			sum += i;

	return sum;
}