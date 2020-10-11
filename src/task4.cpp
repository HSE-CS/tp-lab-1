#include "task4.h"
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int num(char* st, int i) {
	if (i > strlen(st))
		return 0;
	return st[strlen(st) - i] - '0';
}

char* sum(char* x, char* y) {
	int max_len = max(strlen(x), strlen(y)) + 1;
	char* result = new char[max_len] {0};
	int temp = 0;
	int number = 0;

	for (int i = 1; i <= max_len; i++) {
		number = num(x, i) + num(y, i) + temp;
		result[max_len - i] = number % 10 + '0';
		temp = number / 10;
	}

	if (result[0] == '0') {
		for (int j = 0; j < max_len - 1; j++) {
			result[j] = result[j + 1];
		}
		result[max_len - 1] = '\0';
	}
	else
		result[max_len] = '\0';

	return result;
}