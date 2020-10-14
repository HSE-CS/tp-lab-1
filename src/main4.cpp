#include <cstring>
#include "task4.h"

int main() {
	char* x = strdup("12345");
	char* y = strdup("22");
	std::cout << sum(x, y);
	return 0;
}