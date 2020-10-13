#include "task4.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <malloc.h>

char* sum(char* x, char* y)
{
	int a = atoi(x);
	int b = atoi(y);
	int r = a + b;
	char* c = (char*)malloc(sizeof(char) * 100);
	_itoa(r, c, 10);
	return c;
}