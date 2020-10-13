#include "task4.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
//using namespace std;

char* sum(char* x, char* y)
{
	long int n1 = atoi(x);
	long int n2 = atoi(y);
	long long int n3 = n1 + n2;
	char* c;
	c = (char*)malloc(sizeof(char) * 100);
	_itoa(n3,c,10);
	return c;
}