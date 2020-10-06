#include "task4.h"
#include <stdlib.h>
#include <iostream>
#include <cstring> 
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

char* swap(char* str)
{
	unsigned int j = 0;

	for (unsigned int i = strlen(str) - 1; i > (strlen(str) - 1) / 2; i--)
	{
		char symbol = str[j];
		str[j++] = str[i];
		str[i] = symbol;
	}

	return str;
}


char* sum(char* x, char* y)
{
	unsigned long int result_count = 0;
	int res = 0, remains = 0;
	unsigned long int len_x = strlen(x), len_y = strlen(y);
	unsigned long int max_len = len_x > len_y ? len_x : len_y;
	unsigned long int min_len = len_x <= len_y ? len_x : len_y;
	unsigned long int i = len_x - 1, j = len_y - 1, k;

	char* result = new char[max_len + 2];
	result[0] = 'f';
	result[1] = 'f';

	if (len_x == max_len)
		strcpy(result + 2, x);
	else
		strcpy(result + 2, y);

	for (k = max_len + 1; k > max_len - min_len + 1; k--)
	{
		res = ((int)x[i--] - 48) + ((int)y[j--] - 48) + remains;
		remains = res / 10;
		res %= 10;
		result[k] = (char)(res + 48);
	}

	while (remains != 0 || k < 0)
	{
		if (result[k] == 'f')
			res = remains;
		else
			res = ((int)result[k] - 48) + remains;
		remains = res / 10;
		res %= 10;
		result[k] = (char)(res + 48);
		k--;
	}
	
	if (result[0] == 'f' && result[1] == 'f')
	{
		return result + 2;
	}
	else if (result[0] == 'f')
	{
		return result + 1;
	}
	else
		return result;
}