#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#include <stdlib.h>
#include <cstring>

using namespace std;

char* sum(char* x, char* y)
{
	unsigned long long int k = 1;
	unsigned long long int first = 0;

	int size_a = strlen(y);
	int size_b = strlen(x);

	int i = 0;
	int ix;

	int length;
	if (size_a > size_b)
		length = size_a + 1;
	else
		length = size_b + 1;

	int* a = new int[length];
	int* b = new int[length];

	for (i = 0; i < size_b; i++)
	{
		b[i] = x[size_b - 1 - i] - 48;
	}

	while (i < length)
	{
		b[i] = 0;
		i++;
	}

	for (i = 0; i < size_a; i++)
	{
		a[i] = y[size_a - 1 - i] - 48;
	}

	while (i < length)
	{
		a[i] = 0;
		i++;
	}

	for (ix = 0; ix < length; ix++)
	{
		b[ix] += a[ix];
		b[ix + 1] += (b[ix] / 10);
		b[ix] %= 10;

	}

	if (b[length - 1] == 0)
		length--;

	int z;

	for (ix = 0; ix < (length) / 2; ix++)
	{
		z = b[ix];
		b[ix] = b[length - ix - 1];
		b[length - ix - 1] = z;
	}

	char* mass_answer = new char[length + 1];
	mass_answer[length] = '\0';
	for (ix = 0; ix < length; ix++)
	{
		mass_answer[ix] = b[ix] + '0';
	};

	return mass_answer;
};