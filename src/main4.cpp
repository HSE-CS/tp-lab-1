#include <iostream>

#include "task4.h"
using namespace std;
int main() {
	char x[] = "123456789";
	char y[] = "000000001";
	char expected[] = "123456790";
	char* z = sum(x, y);
	cout << "(" << expected << ")" << z << endl;
	char x1[] = "99999999999999999999";
	char y1[] = "1";
	char expected1[] = "100000000000000000000";
	char* z1= sum(x1, y1);
	cout << "(" << expected1 << ")" << z1 << endl;


	return 0;
}