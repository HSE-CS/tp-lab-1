#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#include <cstring>
#include <algorithm>
using namespace std;


char* sum(char* x, char* y) {
	unsigned int lenX = strlen(x);
	unsigned int lenY = strlen(y);
	unsigned int maxLength = max(lenX, lenY);
	int v_ume = 0;
	if (lenX > lenY) {
		char* buf = new char[lenX - lenY];
		for (unsigned int i = { 0 }; i < lenX - lenY; i++) buf[i] = '0';
		buf[lenX - lenY] = { 0 };
		y = strcat(buf, y);
	}
	else if (lenY > lenX) {
		char* buf = new char[maxLength + 1];
		for (unsigned int i = { 0 }; i < lenY - lenX; i++) buf[i] = '0';
		buf[lenY - lenX] = { 0 };
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
			(*result)[*N] = new char[len + 1];
			strncpy((*result)[*N], buf + i - len, len);
			(*result)[*N][len] = '\0';
			len = 0;

			if (strcmp((*result)[*N], "") == 0)
			{
				delete[](*result)[*N];
				(*N)--;
			}
			(*N)++;
		}
	}

	(*result)[*N] = new char[len + 1];
	strncpy((*result)[*N], buf + strlen(buf) - len, len);
	(*result)[*N][len] = '\0';
	len = 0;

	if (strcmp((*result)[*N], "") == 0)
	{
		delete[](*result)[*N];
		(*N)--;
	}
	(*N)++;
}