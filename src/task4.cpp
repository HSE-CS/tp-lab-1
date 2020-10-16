
#include "task4.h"
#include <cstring>
#include <algorithm>
using namespace std;


char* sum(char* x, char* y) {
	unsigned int x_len = strlen(x);
	unsigned int y_len = strlen(y);
	unsigned int maxLength = 0;
	if (x_len > y_len) {
		maxLength = x_len;
	}
	else maxLength = y_len;
	int v_ume = 0;
	if (x_len > y_len) {
		char* buf = new char[x_len - y_len];
		for (unsigned int i = { 0 }; i < x_len - y_len; i++) buf[i] = '0';
		buf[x_len - y_len] = { 0 };
		y = strcat(buf, y);
	}
	else if (y_len > x_len) {
		char* buf = new char[maxLength + 1];
		for (unsigned int i = { 0 }; i < y_len - x_len; i++) buf[i] = '0';
		buf[y_len - x_len] = { 0 };
		x = strcat(buf, x);
	}
	char* res = new char[maxLength + 2];
	res[maxLength + 1] = '\0';
	for (unsigned int i = 0; i <= maxLength; i++) {
		if (i == maxLength) {
			res[0] = '0' + v_ume;
			break;
		}
		res[maxLength - i] = x[maxLength - i - 1] + y[maxLength - i - 1] + v_ume - '0';
		v_ume = 0;
		if (res[maxLength - i] > '9') {
			v_ume = 1;
			res[maxLength - i] = res[maxLength - i] - 10;
		}
	}
	if (res[0] == '0') return res + 1;
	return res;
}