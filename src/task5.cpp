#include "task5.h"
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

void split(char*** result, int* N, char* buf, char ch) {

	int count = 0;

	for (int i = 0; i < strlen(buf); i++) {
		if (buf[i] == ch)
			count++;
	}
	*N = count + 1;

	
}