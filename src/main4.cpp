
#include <iostream>
#include <cstring>
#include "task4.h"
using namespace std;
int main() {

	char *u = strdup("123456789");
	char *v = strdup("1");
	cout << sum(u, v);
	return 0;

}