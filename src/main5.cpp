#include <iostream>
#include <string.h>
#include"task5.h"
using namespace std;

int main() {
	int N;
	char buf[] = { 'b', 'a', 'c', 'b', 'f', 'b', '\0'};
	char ch = 'b';
	char** str = new char*[1];
	split(&str, &N, buf, ch);

	return 0;
}