#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include "task4.h"


char* sum(char* x, char* y)
{
	int size = 0;
	if (strlen(x) > strlen(y))
		size = strlen(x) + 2;
	else
		size = strlen(y) + 2;
	char* result = new char[size];
	for (int i = 0;i < size;i++)
	{
		result[i] = '\0';
	}
	int* elem1 = new int[size];
	int* elem2 = new int[size];
	for (int i = 0; i < size; i++)
	{
		if (i<strlen(x))
			elem1[size-i-1] = x[strlen(x)-i-1] - '0';
		else
			elem1[size-i-1] = 0;
		if (i< strlen(y))
			elem2[size-i-1] = y[strlen(y)-i-1] - '0';
		else
			elem2[size-i-1] = 0;
	}
	int ost = 0;
	for (int i = 0; i < size;i++)
	{
		int summa = elem1[size-i-1] + elem2[size-i-1] + ost;
		ost = summa / 10;
		summa = summa % 10;
		result[i] = summa + '0';
	}
	char* result2_0 = new char[size];
	if (result[size - 2] == '0')
		size -= 2;
	if (result[size - 1] == '0')
		size -= 1;
	for (int i = 0;i < size;i++)
	{
		result2_0[i] = '\0';
	}
	for (int i=0; i < size; i++)
	{
		result2_0[i] = result[size - i - 1];
	}
	result2_0[size] = '\0';
	return result2_0;
}