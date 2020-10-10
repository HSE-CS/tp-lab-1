#include "task5.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string>

int main()
{
	char buf[12] = "123,456,789";
	int N = 0;
	char** result = nullptr;
	split(&result, &N, buf, ',');
	for (int i = 0;i < N;i++)
	{
		printf("%s\n", result[i]);
	}
}
