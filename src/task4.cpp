#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#include <string.h> 

char* sum(char* x, char* y)
{
	int lenX = strlen(x);
	int lenY = strlen(y);
	int len = lenX;
	int next = 0;
	x = reverse(x);
	y = reverse(y);
	char* res = new char[lenX];
	res[lenX] = '\0';
	if (lenX > lenY)
	{
		y = zeros(y, lenX - lenY);
		len = lenX;
	}
	else if (lenX < lenY)
	{
		x = zeros(x, lenY - lenX);
		len = lenY;
		res = new char[lenY];
		res[lenY] = '\0';
	}
	for (int i = 0; i < len; i++)
	{
		res[i] = ((x[i] - '0' + y[i] - '0' + next) % 10) + '0';
		next = (x[i] - '0' + y[i] - '0' + next) / 10;
	}
	if (next > 0)
	{
		char* res1 = new char[len + 1];
		res1[len + 1] = '\0';
		for (int i = 0; i < len; i++)
			res1[i] = res[i];
		res1[len] = next + '0';
		return reverse(res1);
	}
	return reverse(res);
}
char* reverse(char* s)
{
	int len = strlen(s);
	char* res = new char[len];
	res[len] = '\0';
	for (int i = 0; i < len; i++)
		res[i] = s[len - i - 1];
	return res;
}
char* zeros(char* s, int n)
{
	int len = strlen(s);
	char* res = new char[len + n];
	res[len + n] = '\0';
	for (int i = 0; i < len; i++)
		res[i] = s[i];
	for (int i = len; i < len + n; i++)
		res[i] = '0';
	return res;
}