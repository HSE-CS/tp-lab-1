#include <iostream>
#include <cmath>

void reverse(char* s) {

	for (int i = 0; i < strlen(s) / 2; i++) {
		swap(s[i], s[strlen(s) - i - 1]);
	}

}

char* sum(char* x, char* y) {
	int maxSize = strlen(x) >= strlen(y) ? strlen(x) : strlen(y);
	int minSize = strlen(x) > strlen(y) ? strlen(y) : strlen(x);
	char* maxString = strlen(x) >= strlen(y) ? x : y;
	char* minString = strlen(x) < strlen(y) ? x : y;
	char* res = new char[maxSize + 2];

	int dec = 0;
	int ans;

	for (int i = 0; i < maxSize; i++) {
		if (i <= minSize - 1) {
			ans = maxString[maxSize - i - 1] - '0' + minString[minSize - i - 1] - '0' + dec;
		}
		else {
			ans = maxString[maxSize - i - 1] - '0' + dec;
		}
		dec = ans / 10;
		res[i] = ans % 10 + '0';
	}
	if (dec > 0) {
		res[maxSize] = dec + '0';
		maxSize += 1;
	}
	res[maxSize] = '\0';
	reverse(res);
	return res;
}