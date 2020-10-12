#include "task4.h"
#include <string.h>
#include <algorithm>
#include <map>
#include <iostream>

char* sum( char* x, char* y) {
	int SIZE = strlen(x);
	int size = strlen(y);
	if (strlen(x) < strlen(y)) {
		size = strlen(x);
		SIZE = strlen(y);
	}
	char* result = (char*)calloc(SIZE , sizeof(char*)) ;
	char* tmp = (char*)calloc(SIZE , sizeof(char*));
	int ost = 0;
	for (int i = 0; i < size; i++) {
		tmp[i] = ((y[strlen(y) - i - 1] - '0' + x[strlen(x) - i - 1] - '0' + ost) % 10) + '0';
		ost = ((y[strlen(y) - i - 1] - '0' + x[strlen(x) - i - 1] - '0' + ost) / 10);
	}
	if (strlen(x) == SIZE) {
		for (int i = size; i < SIZE; i++) {
			tmp[i] = ((x[SIZE - i - 1] - '0' + ost) % 10) + '0';
			ost = (x[SIZE - i - 1] - '0' + ost) / 10;
		}
	}
	else {
		for (int i = size;  i < SIZE; i++) {
			tmp[i] = ((y[SIZE - i - 1] - '0' + ost) % 10) + '0';
			ost = (y[SIZE - i - 1] - '0' + ost) / 10;
		}
	}
	
	if (ost) {
		tmp[SIZE] = ost + '0';
	}
	for (int i = strlen(tmp) - 1; i >= 0; i--) {
		result[strlen(tmp) - i - 1] = tmp[i];
	}

	free(tmp);
	return result;
}