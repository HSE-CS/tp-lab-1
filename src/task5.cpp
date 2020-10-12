#include "task5.h"
#include <cstring>

void split(char*** result, int* N, char* buf, char ch)
{
	int size = 0;
	int count = 0;
	for (int i = 0; i < strlen(buf); ++i)
	{
		if (buf[i] == ch)
			(*N)++;
		size++;
	}

	(*N)++;

	(*result) = new char* [*N]();
	for (int i = 0; i < *N; ++i)
		(*result)[i] = new char [size]();

	int i = 0;
	*N = 0;
	while (buf[i] != '\0')
	{
		if (buf[i] == ch)
		{
			(*result)[(*N)][count] = '\0';
			(*N)++;
			count = 0;
		}
		else
		{
			(*result)[(*N)][count] = buf[i];
			count++;
		}
		i++;
	}
	(*result)[(*N)][count] = '\0';
	(*N)++;
}
