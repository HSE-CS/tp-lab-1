#include "task4.h"
#include <cstring>
#include <algorithm>
using namespace std;


char *sum(char *u, char *v) {

	unsigned int lenU = strlen(u);
	unsigned int lenV = strlen(v);
	unsigned int maxL = max(lenU, lenV);
	bool spill = false;
	if (lenU > lenV) {
		char *buf = new char[lenU - lenV];
		for (unsigned int i = { 0 }; i < lenU - lenV; i++) buf[i] = '0';
		buf[lenU - lenV] = { 0 };
		v = strcat(buf, v);
	}
	else if (lenV > lenU) {
		char *buf = new char[maxL + 1];
		for (unsigned int i = { 0 }; i < lenV - lenU; i++) buf[i] = '0';
		buf[lenV - lenU] = { 0 };
		u = strcat(buf, u);
	}
	char *temp = new char[maxL + 2];
	temp[maxL + 1] = '\0';
	for (unsigned int i = 0; i <= maxL; i++) {
		if (i == maxL) {
			temp[0] = '0' + spill;
			break;
		}
		temp[maxL - i] = u[maxL - i - 1] + v[maxL - i - 1] + spill - '0';
		spill = false;
		if (temp[maxL - i] > '9') {
			spill = true;
			temp[maxL - i] = temp[maxL - i] - 10;
		}
	}
	if (temp[0] == '0') return temp + 1;
	return temp;

}