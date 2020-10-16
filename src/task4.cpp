#include "task4.h"
#include <cstring>
#include <algorithm>
using namespace std;


char *sum(char *x, char *y) 
{
	unsigned int lenX = strlen(x);
	unsigned int lenY = strlen(y);
	unsigned int maxLength = max(lenX, lenY);
	bool overflow = false;
	if (lenX > lenY) 
	{
		char *buf = new char[lenX - lenY];
		for (unsigned int i = { 0 }; i < lenX - lenY; i++) buf[i] = '0';
		buf[lenX - lenY] = { 0 };
		y = strcat(buf, y);
	}
	else if (lenY > lenX) 
	{
		char *buf = new char[maxLength + 1];
		for (unsigned int i = { 0 }; i < lenY - lenX; i++) buf[i] = '0';
		buf[lenY - lenX] = { 0 };
		x = strcat(buf, x);
	}
	char *temp = new char[maxLength + 2];
	temp[maxLength + 1] = '\0';
	for (unsigned int i = 0; i <= maxLength; i++) 
	{
		if (i == maxLength) 
		{
			temp[0] = '0' + overflow;
			break;
		}
		temp[maxLength - i] = x[maxLength - i - 1] + y[maxLength - i - 1] + overflow - '0';
		overflow = false;
		if (temp[maxLength - i] > '9') 
		{
			overflow = true;
			temp[maxLength - i] = temp[maxLength - i] - 10;
		}
	}
	if (temp[0] == '0') return temp + 1;
	return temp;
}