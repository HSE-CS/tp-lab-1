#include <iostream>
#include <string.h>
#include"task5.h"
using namespace std;

int main() {
	int N;
	char buf[] = "123,456,789";
	char ch = ',';
	char** str = new char*[1];
	split(&str, &N, buf, ch);

	return 0;
}