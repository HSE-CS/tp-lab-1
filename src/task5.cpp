#include "task5.h"
#include <iostream>
#include <cstring>

using namespace std;

void split(char*** result, int* N, char* buf, char ch) 
{
	unsigned int k = 3;
	char** arr = new char* [k];
	for (int i = 0; i < k; i++) 
	{
		arr[i] = new char[k];
	}
	(*result) = arr;
	int numoflet = 0;
	for (int i = 0; i < strlen(buf); i++)
	{
		if (buf[i] == ch) 
		{
			arr[(*N)][numoflet] = '\0';
			numoflet = 0;
			(*N)++;

			continue;
		}
		if (i == strlen(buf) - 1) 
		{
			arr[(*N)][numoflet + 1] = '\0';
		}
		arr[(*N)][numoflet] = buf[i];
		numoflet++;
	}
	(*N)++;
}