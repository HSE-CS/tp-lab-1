#include "task4.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>

//using namespace std;


int main()
{
	char* x = (char*)malloc(sizeof(char) * 100);
	char* y = (char*)malloc(sizeof(char) * 100);
	x = "1230";
	y = "5638";
	printf("%s\n",sum(x, y));
}