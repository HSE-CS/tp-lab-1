#include <vector>
#include <cstring>

void split(char*** result, int* N, char* buf, char ch) {
	int counter = 1;
	int len = 0;
	std::vector<int> lens;
	for (int i = 0; i < strlen(buf); ++i) {
		if (buf[i] == ch) {
			++counter;
			lens.push_back(len);
			len = 0;
		}
		else {
			++len;
		}
	}
	lens.push_back(len);
	*N = counter;
	char** res = new char* [*N];
	int i = 0;
	int k = 0;
	for (int l : lens) {
		char* word = new char[l];
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