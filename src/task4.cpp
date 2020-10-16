#include <cstring>
#include <algorithm>
#include "task4.h"
using namespace std;


char* sum(char* x, char* y) {
	int length = 0;
	int o = 0;
	unsigned int x_len = strlen(x);
	unsigned int y_len = strlen(y);
	bool overflow = false;
	if (x_len > y_len) {
		length = x_len;
	}
	else {
		length = y_len;
	}
	char* end = new char[length + 1];
	char* v = new char[length];
	if (x_len > y_len) {
		for (unsigned int i = 0; i < x_len - y_len; i++) {
			v[i] = '0';
		}
		for (unsigned int j = x_len - y_len; j < y_len; j++) {
			v[j] = y[j];
		}
		y = v;
	}
	if (y_len > x_len) {
		for (unsigned int i = 0; i < y_len - x_len; i++) {
			v[i] = '0';
		}
		for (unsigned int j = y_len - x_len; j < x_len; j++) {
			v[j] = x[j];
		}
		x = v;
	}
	delete[] v;
	for (int i = length - 1; i >= 0; i--) {
		end[i] = (char)(x[i] + y[i] + overflow - '0');
		overflow = false;
		if (end[i] > '9') {
			end[i] = (char)(end[i] - 10);
			overflow = true;
			if (0 == i) {
				for (unsigned int k = length; k >= 0; k--) end[k] = end[k - 1];
				end[0] = '1';
			}
		}
		if (0 == i && 0 == overflow) end[length] = '\0';
	}
	return end;
}