#include "task5.h"
#include <iostream>
#include <cstring>

using namespace std;

void split(char*** result, int* N, char* buf, char ch) 
{
	char** arr = new char* [3];
	for (int i = 0; i < 3; ++i) 
	{
		arr[i] = new char[3];
	}
	(*result) = arr;
	int numoflet = 0;
	for (int i = 0; i < strlen(buf); i++) 
	{
		if (buf[i] == ch)
		{
			arr[(*N)][numoflet] = '\0';
			(*N)++;
			numoflet = 0;
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