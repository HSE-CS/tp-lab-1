#include <stdio.h>
#include <math.h>
#include <time.h>
#include <cstdlib>
#include "task5.h"
#include <iostream>
#include <algorithm>
using namespace std;
int main() {

	char* buf = "hello.world.my.name.is.irina";
	char** result;
	int N = 0;

	split(&result, &N, buf, '.');

	printf("%d\n", N);

	for (int i = 0; i < N; i++)
		printf("%s\n", result[i]);

	return 0;
}
