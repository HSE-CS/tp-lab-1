#include <iostream>
#include <string.h>
#include <algorithm>
#include "task4.h"
#define SIZE 1000

using namespace std;

char* sum(char* x, char* y) {
	char result[SIZE] = { 0 };
	int i = 0;
	int f1 = 0;
	int f2 = 0;
	int buf = 0;
	int maxs = 0;
	if (strlen(x) > strlen(y)) {
		maxs = 1;
	}
	else if (strlen(x) < strlen(y)) {
		maxs = 2;
	}
	else if (strlen(x) == strlen(y)) {
		maxs = 3;
	}
	int count1 = strlen(x)-1;
	int count2 =  strlen(y)-1;
	while((count1>-1)&& (count2 > -1)) {
		f1 = (int)x[count1] - 48;
		f2 = (int)y[count2] - 48;
		result[max(count1, count2)] = (char)((f1 + f2) % 10 + buf + 48);
		//cout << result[max(count1, count2)] << endl;
		if (f1 + f2 + buf >= 10)
			buf = 1;
		else
			buf = 0;
		--count1;
		--count2;
	}

	count1 = max(count1, count2);

	if (maxs == 1) {
		if ((x[count1] == '9') && (buf == 1)) {
			x[count1] = '0';
			if (count1 == 0) {
				for (i = strlen(result); i > -1; --i) {
					result[i + 1] = result[i];
				}
				result[0] = '1';
			}
			else {
				--count1;
				result[count1] = x[count1] + 1;
				while (count1 != -1) {
					result[count1] = x[count1];
					--count1;
				}
			}
		}
		else {
			while (count1 != -1) {
				result[count1] = x[count1] + buf;
				//cout << result[count1] << endl;
				buf = 0;
				--count1;
			}
		}
	}
	else if (maxs == 2) {
		if ((y[count1] == '9') && (buf == 1)) {
			y[count1] = '0';
			if (count1 == 0) {
				for (i = strlen(result); i > -1; --i) {
					result[i + 1] = result[i];
				}
				result[0] = '1';
			}
			else {
				--count1;
				result[count1] = y[count1] + 1;
				while (count1 != -1) {
					result[count1] = y[count1];
					--count1;
				}
			}
		}
		else {
			while (count1 != -1) {
				result[count1] = y[count1] + buf;
				buf = 0;
				--count1;
			}
		}
	}
	else {
		if ((buf == 1)) {
			for (i = strlen(result); i > -1; --i) {
				result[i + 1] = result[i];	
			}
			result[0] = '1';
		}
	}
	cout << result << endl;
	return result;
}
