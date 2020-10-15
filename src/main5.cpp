#include <iostream>
using namespace std;
#include "task5.h"

int main() {
	char buf[100] = {"hello"};
	char*** result = { NULL };
	int* N = 0;
	result = (char***)malloc(sizeof(char**));
	N = (int*)malloc(sizeof(int));
	char ch = 0;

	split(result, N, buf, ch);

	/*for (int i = 0; i < *N; i++) {
		for (int j = 0; j < strlen((*result)[i]); j++) {
			cout << (*result)[i][j];
		}
		cout << endl;
	}*/
	return 0;
}
