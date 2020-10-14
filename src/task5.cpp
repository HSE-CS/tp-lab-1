#include <iostream>
#include <cstring>
#include "task5.h"

using namespace std;

void split(char*** result, int* N, char* buf, char ch) 
{
	int k = 3;
	char** spl = new char* [k];
	for (int i = 0; i < k; i++) 
	{
		spl[i] = new char[k];
	}
	(*result) = spl;
	int numoflet = 0;
	for (int i = 0; i < strlen(buf); i++) 
	{
		if (buf[i] == ch)
		{
			spl[(*N)][numoflet] = '\0';
			(*N)++;
			numoflet = 0;
			continue;
		}
		if (i == strlen(buf) - 1) 
		{
			spl[(*N)][numoflet + 1] = '\0';
		}
		spl[(*N)][numoflet] = buf[i];
		numoflet++;
	}
	(*N)++;
}