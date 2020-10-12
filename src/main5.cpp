#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "task5.h"

int main() {
	char* buf = (char*)calloc(20, sizeof(char));
	strcpy(buf, "123,456,789");

	cout << buf << endl;;
	int N = 0;
	char** result = nullptr;
	split(&result, &N, buf, ',');
	free(buf);
	cout << result[0] << endl;
	cout << result[1] << endl;
	cout << result[2] << endl;
	for (int i = 0; i < N; i++) {
		free(result[i]);
	}
	free(result);
	return 0;
}