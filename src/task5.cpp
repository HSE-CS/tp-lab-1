#include "../include/task5.h"
#include <cstring>

#define bufSz 100

void split(char*** result, int* N, char* buf, char ch)
{
	*N = 0;
	unsigned int j = 0;
	unsigned int wordIter = 0;
	//result = new char**;
	*result = new char* [1000];
	*result[0] = new char[bufSz];
	for (unsigned int i = 0; i < strlen(buf); ++i)
	{
		if (buf[i] == ch)
		{
			(*result)[j][wordIter] = '\0';
			++j;
			(*N)++;
			(*result)[j] = new char[bufSz];
			wordIter = 0;
			continue;
		}
		(*result)[j][wordIter] = buf[i];
		++wordIter;
	}
	(*result)[j][wordIter] = '\0';
	(*N)++;
}
