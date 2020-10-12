#include <string>
#include <iostream>
#include <sstream>
#include "task4.h"
using namespace std;

int main() {
	//const char *x = "99999999999999999999", *y = "1";
	const char x[] = "123456789", y[] = "000000001";
	cout << x << " + " << y << " = " << sum(x, y);

	return 0;
}