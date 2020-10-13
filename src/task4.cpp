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
	int n1 = atoi(x);
	int n2 = atoi(y);
	long long int n3 = n1 + n2;
	//printf("%d", n3);
	//char* c;
	char c[10];
	printf("res=%s\n",_itoa(n3,c,10));
	//c = (char*)malloc(sizeof(char) * 10);
	//c = n3 + '/0';
	char* res = c;
	printf("%s\n", res);
	return res;
}