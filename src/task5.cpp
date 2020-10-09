#include "task5.h"

using namespace std;

void split(char*** result, int* N, char* buf, char ch) {

	int count_sep = 0;
	for (auto i = 0; i < strlen(buf); i++) {

		if (buf[i] == ch) {
			count_sep += 1;
		}
	}

	char** res = new char* [count_sep + 1];
	for (auto i = 0; i < count_sep + 1; i++){
		res[i] = new char[strlen(buf)];
	}
		
	int i_buf = 0;
	int i_word = 0;

	for (int count_word = 0; count_word < count_sep + 1; count_word++) {
		i_word = 0;

		while ((buf[i_buf] != ch) && (i_buf < strlen(buf))) {

			res[count_word][i_word] = buf[i_buf];
				
			i_word += 1;
			i_buf += 1;
		}

		if ((buf[i_buf] == ch) || (i_buf == strlen(buf))) {
			res[count_word][i_word] = '\0';
			i_buf += 1;
		}
	}

	*N = count_sep + 1;
	*result = res;
}