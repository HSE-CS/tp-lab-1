#include <iostream>
#include <cstring>
#include "task5.h"

using namespace std;

void split(char*** result, int* N, char* buf, char ch) 
{
	unsigned int k = 3;
	char** test = new char* [k];
	for (int i = 0; i < k; i++) 
	{
		test[i] = new char[k];
	}
	(*result) = test;
	int numoflet = 0;
	for (int i = 0; i < strlen(buf); i++) 
	{
		if (buf[i] == ch)
		{
			test[(*N)][numoflet] = '\0';
			(*N)++;
			numoflet = 0;
			continue;
		}
		if (i == strlen(buf) - 1) 
		{
			test[(*N)][numoflet + 1] = '\0';
		}
		test[(*N)][numoflet] = buf[i];
		numoflet++;
	}
	(*N)++;
}