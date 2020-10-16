#include <iostream>
#include "task2.h"
using namespace std;
int main() {

	unsigned long n = { 1 };
	if (checkNum(n)) cout << Prime(n) << "\n";
	else cout << nextNum(n) << "\n";
	cout << nextNum(2);
	return 0;

}