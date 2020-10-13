#include <iostream>
#include <cstring>
#include "task4.h"

using namespace std;

char* sum(char* x, char* y) 
{
	int len = max(strlen(x), strlen(y));
	int len1 = strlen(x);
	int len2 = strlen(y);
	char* buf = new char[len + 1];
	char* arr2 = new char[len];
	int overflow = 0;
	if (len1 > len2) 
	{
		for (int i = 0; i < len1 - len2; ++i) 
		{
			arr2[i] = '0';
		}
		for (int j = 0; j < len2; ++j) 
		{
			arr2[len1 - len2 + j] = y[j];
		}
		y = arr2;
	}
	if (len2 > len1) 
	{
		for (int i = 0; i < len2 - len1; ++i) 
		{
			arr2[i] = '0';
		}
		for (int j = 0; j < len1; ++j) 
		{
			arr2[len2 - len1 + j] = x[j];
		}
		x = arr2;
	}
	for (int i = len - 1; i > -1; --i) 
	{
		buf[i] = x[i] + y[i] + overflow - '0';
		overflow = 0;
		if (buf[i] > 57) 
		{
			buf[i] = buf[i] - 10;
			overflow=overflow+1;
			if ((i == 0) && (overflow > 0))
			{
				for (int i = len; i > -1; --i) 
				{
					buf[i] = buf[i - 1];
				}
				buf[0] = '1';
			}
		}
		if ((i == 0 ) && (overflow == 0))
		{
			buf[len] = '\0';
		}
	}
	delete[] arr2;
	return buf;
}