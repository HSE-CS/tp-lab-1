#include "../include/task5.h"
#include <iostream>

using namespace std;

int main()
{
	char** res;
	char* buf = (char*)"Hello1world1lorem1ipsum1test";
	int N;
	char spacer = '1';

	split(&res, &N, buf, spacer);
	for (int i = 0; i < N; ++i)
		cout << res[i] << endl;

	return 0;
}