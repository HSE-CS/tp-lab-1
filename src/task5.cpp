#include "task5.h"
#include <iostream>
#include <cstring>

using namespace std;

void split(char*** result, int* N, char* buf, char ch) 
{
	int k = 3;
	char** arr1 = new char* [k];
	for (int i = 0; i < k; i++) 
	{
		arr1[i] = new char[k];
	}
	(*result) = arr1;
	int numoflet = 0;
	for (int i = 0; i < strlen(buf); i++)
	{
		if (buf[i] == ch) 
		{
			arr1[(*N)][numoflet] = '\0';
			(*N)++;
			numoflet = 0;
			continue;
		}
		if (i == strlen(buf) - 1) 
		{
			arr1[(*N)][numoflet + 1] = '\0';
		}
		arr1[(*N)][numoflet] = buf[i];
		numoflet++;
	}
	(*N)++;
}