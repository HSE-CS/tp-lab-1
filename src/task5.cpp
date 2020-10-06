#include <iostream>
#include <cmath>

void split(char*** result, int* N, char* buf, char ch) {
	char** result1 = new char* [10];
	for (int i = 0; i < 10; i++)
		result1[i] = new char[10];

	int numStr = 0;
	int indexStr = 0;
	for (int i = 0; i < strlen(buf); i++) {
		if (buf[i] == ch) {
			result1[numStr][indexStr] = '\0';
			++numStr;
			indexStr = 0;
			continue;
		}
		else {
			result1[numStr][indexStr] = buf[i];
		}
		++indexStr;
	}
	result1[numStr][indexStr] = '\0';
	*N = indexStr;
	*result = result1;
}