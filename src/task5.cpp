#include "task5.h"
#include <cstring>
#include <vector>

void split(char ***result, int *N, char *buf, char ch) {
	std::vector<int> len{};
	std::vector<int> posns{0};
	int i;

	for (i = 0; buf[i] != '\0'; i++) {

		if ( buf[i] == ch ) {

			if ( !(i - posns.back()) )
				posns.pop_back();

			posns.push_back(i + 1);

			if ( i - posns[len.size()] > 0 )
				len.push_back(i - posns[len.size()]);
		}
	}
	if ( i - posns[len.size()] > 0 )
		len.push_back(i - posns[len.size()]);

	*N = len.size();

	char **new_buf = new char* [*N];

	for (i = 0; i < *N; i++) {
		new_buf[i] = new char [len[i] + 1];
		strncpy(new_buf[i], &buf[posns[i]], len[i]);
		new_buf[i][len[i]] = '\0';
	}

	*result = new_buf;
}