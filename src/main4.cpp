#include <string>
#include <iostream>
#include <sstream>
#include "task4.h"
using namespace std;

int main() {
	char x[] = { '9', '0', '9','9', '0', '9','9', '0', '9', '\0'}, y[] = { '1', '1','9', '0', '9','9', '0', '9', '\0'};
	cout << x << " + " << y << " = " << sum(x, y);

	return 0;
}