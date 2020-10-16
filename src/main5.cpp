// Реализовать функцию разбиения строки на подстроки с использованием символа - разделителя

#define _CRT_SECURE_NO_WARNINGS
//#include <algorithm>
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include "task5.h"

int main() {

	char* buf = "privet.ya.student.pmi";
	char** result;
	int N = 0;

	split(&result, &N, buf, '.');

	printf("%d\n", N);
	
	for (int i = 0; i < N; i++)
		printf("%s\n", result[i]);

	return 0;
}