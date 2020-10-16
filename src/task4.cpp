#include <iostream>
#include <algorithm>
#include "task4.h"
#include <string.h>
using namespace std;

char* sum(char* x, char* y) {
	int len = max(strlen(x), strlen(y));

	char* ans = (char*)malloc(sizeof(char) * (len + 1));
	char* x1 = (char*)malloc(sizeof(char) * len);
	char* y1 = (char*)malloc(sizeof(char) * len);
	x1[len] = '\0';
	y1[len] = '\0';
	ans[len + 1] = '\0';

	for (int i = 0; i < len; i++) {
		x1[i] = '0';
		y1[i] = '0';
	}
	for (int i = 0; i < strlen(ans); i++) {
		ans[i] = '0';
	}
	int len1 = strlen(x);
	for (int i = 0; i < len1; i++) {
		x1[i] = x[len1 - 1 - i];
	}

	len1 = strlen(y);
	for (int i = 0; i < len1; i++) {
		y1[i] = y[len1 - 1 - i];
	}


	//len = strlen(ans);
	for (int i = 0; i < len; i++) {
		int m = x1[i] + y1[i] + ans[i] - '0' - '0' - '0';
		ans[i] = '0' + (m % 10);
		ans[i + 1] = (m / 10) + '0';

	}
	len = strlen(ans);
	if (ans[len - 1] == '0') {
		ans[len - 1] = '\0';
	}

	len = strlen(ans);
	for (int i = 0; i < len / 2; i++) {
		char z = ans[i];
		ans[i] = ans[len - 1 - i];
		ans[len - 1 - i] = z;
	}
	return ans;
}s