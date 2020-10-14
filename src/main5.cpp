#include "task5.h"

int main() {

	char** result = new char*;
	int _count = 0;
	char buf[25] {"123,456,789"};
	char ch = ',';

	split(&result, &_count, buf, ch);

	for (int k = 0; k < 3; k++) {
		std::cout << result[k] << std::endl;
	}

	return 0;
}