
#include "task5.h"
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

void split(char ***result, int *N, char *buf, char ch) {
	int counter = 1;
	int size = 0;
	vector<int> lens;
	for (int i = 0; i < strlen(buf); ++i) {
		if (buf[i] == ch) {
			++counter;
			lens.push_back(size);
			size = 0;
		}
		else {
			++size;
		}
	}
	lens.push_back(size);
	*N = counter;
	char **res = new char *[*N];
	int i = 0;
	int k = 0;
	for (int l : lens) {
		char *word = new char[l];
		for (int j = 0; j < l; ++j) {
			word[j] = buf[k];
			++k;
		}
		++k;
		word[l] = '\0';
		res[i] = word;
		++i;
	}
	*result = res;
}