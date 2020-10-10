#include "task5.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>

void split(char*** result, int* N, char* buf, char ch)
{
	int count = 1;
	for (int i = 0; i < strlen(buf);i++)
	{
		if (buf[i] == ch)
			count += 1;
	}
	(*N) = count;
	count = 0;
	(*result) = new char* [*N];

	for (int i = 0; i < *N; i++)
	{
		(*result)[i] = new char [strlen(buf)];
		(*result)[i][0] = '\0';
	}
	int len = 0, start=0;
	for (int i = 0; i <= strlen(buf); i++)
	{
		if (buf[i] == ch || i==strlen(buf))
		{
			len = i - start;
			for (int j = 0; j < len;j++)
			{
				(*result)[count][j] = buf[start];
				start += 1;
			}
			(*result)[count][len] = '\0';
			count += 1;
			start = i + 1;
		}
		
	}
}