#include <malloc.h>
#include <string.h>
#include "task4.h"


char* sum(char* x, char* y) {
	int size_a = strlen(x);
	int size_b = strlen(y);
	int size = 0;
	if (size_a > size_b) {
		int size = size_a + 1;
	}
	else {
		int size = size_b + 1;
	}
	char* arr = (char*)malloc(size);
	memset(arr, ' ', size);
	arr[size] = '\0';
	int carry = 0;
	int a = 0;
	int b = 0;
	for (int i = 0; i < size; i++) {
		if (i > size_a) {
			int a = 0;
		}
		else {
			int a = x[size_a - i] - '0';
		}
		if (i > size_b) {
			int b = 0;
		}
		else {
			int b = x[size_b - i] - '0';
		}
		int c = a + b + carry;
		arr[size - i] = '0' + c % 10;
		carry = c / 10;
	}
	if (arr[0] == '0' && arr[1] != '0') {
		for (int i = 0; i < size - 1; i++)
			arr[i] = arr[i + 1];
		arr[size - 1] = '\0';
	}
	return arr;
}