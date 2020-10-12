#include "task5.h"
#include <iostream>

using namespace std;

int main() {
	char **result, *buf = "Separate me, please", ch = ' ';
	int N;
	split(&(result), &N, buf, ch);
	for (int i = 0; i < N; i++) {
		cout << (result)[i] << "\n";
	}
	for (int i = 0; i < N; i++) {
		free((result)[i]);
	}
	free(result);
	return 0;
}