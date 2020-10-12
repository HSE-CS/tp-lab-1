#include <vector>
#include "task5.h"
using namespace std;

void split(char*** result, int* N, char* buf, char c) {
	int resN = 0;
	int i = 0, f = 0;
	vector<int> sizes;
	for (int k = 0; buf[i] != 0; i++, f++) {
		if (buf[i] == c) {
			resN++;
			sizes.push_back(f);
			f = 0;
		}
	}
	if (f != 0) {
		resN++;
		sizes.push_back(f);

		f = 0;
	}
	(*result) = new char* [resN]();

	for (i = 0; i < resN; i++) {
		(*result)[i] = new char[sizes[i] + 1];
	}

	for (int i = 0, k = 0, j = 0;buf[i]; i++, j++) {
		if (buf[i] == c) {

			((*result)[k])[j] = 0;
			j = -1;
			k++;
		}
		else {
			((*result)[k])[j] = buf[i];
		}
	}
	((*result)[resN - 1])[sizes[resN - 1] - 1] = 0;

	*N = resN;
}