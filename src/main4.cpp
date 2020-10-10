#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include "task4.h"

int main()
{
	char x[10] = "123456789";
	char y[10] = "000000001";
	char* le = sum(x, y);
	return 0;
}