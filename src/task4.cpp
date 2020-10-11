#include <iostream>
#include "task4.h"
using namespace std;

char* del(char* arr, int len) {
	char* res = new char[len];
	for (int i = 0; i < len; i++) {
		res[i] = arr[i + 1];
	}
	return res;
}

int dig(char x) {
	int res = (int)x - 48;
	return res;
}
char to_char(int x) {
	char res = (char)(x + 48);
	return res;
}

char* sum_pro(char* min, char* max, int dif, int len) {
	int one_sum = 0, i = len - 3;
	char* res = new char[len];
	res[len - 1] = '\0', res[len - 2] = '0', res[0] = '0';
	while (true) {
		if (i >= dif) {
			one_sum = dig(max[i]) + dig(min[i - dif]);
		}
		else {
			one_sum = dig(max[i]);
		}
		one_sum += dig(res[i + 1]);
		res[i + 1] = to_char(one_sum % 10);
		res[i] = to_char(one_sum / 10);
		if (i == 0) {
			break;
		}
		i--;
	}
	if (res[0] == '0') {
		return del(res, len - 1);
	}
	return res;
}

char* sum(char* x, char* y) {
	if (strlen(x) > strlen(y)) {
		return sum_pro(y, x, strlen(x) - strlen(y), strlen(x) + 2);
	}
	else {
		return sum_pro(x, y, strlen(y) - strlen(x), strlen(y) + 2);
	}
}