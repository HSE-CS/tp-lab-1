#include "task5.h"
#include <iostream>
#include <cstring> 

using namespace std;

void split(char*** result, int* N, char* buf, char ch)
{
	unsigned int counter = 0, start = 0;
	for (unsigned int i = 0; i < strlen(buf); i++)
		if (buf[i] == ch)
			counter++;
	*N = counter + 1;
	counter = 0;

	*result = new char* [*N];
	for (int i = 0; i < *N; i++) 
	{
		(*result)[i] = new char[strlen(buf)];
		(*result)[i][0] = '\0';
	}

	for (unsigned int i = 0; i < strlen(buf); i++)
	{
		if (buf[i] == ch)
		{
			int k = 0;
			int end = i - start;
			for (k = 0; k < end; k++)
				(*result)[counter][k] = buf[start++];
			(*result)[counter][k] = '\0';
			start = i + 1;
			counter++;
		}
	}

	if (start < strlen(buf))
	{
		int k = 0;
		int end = strlen(buf) - start + 1;
		for  (k = 0; k < end; k++)
			(*result)[counter][k] = buf[start++];
		(*result)[counter][k] = '\0';
	}
}