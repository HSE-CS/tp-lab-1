#include "task1.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
#include <string.h>

using namespace std;

unsigned long findValue(unsigned int min, unsigned max)
{
	int num = max;
	int i = min;
	while (i <= max)
	{
		if (num % i == 0)
		{
			if (i == max)
			{
				return num;
			}
			i += 1;
		}
		else
		{
			num += 1;
			i = min;
		}
	}
}


//unsigned long findValue(unsigned int min, unsigned max)
//{
//	int num = max;
//	int i = min;
//	int* arr = new int[100];
//	int count = 0;
//	int n, k, t = 0;
//	bool smpl = true;
//	for (i = min+1; i <= max; i++)
//	{
// 		n = i;
//		t = 0;
//		k = 0;
//		while (n != 1)
//		{
//
//		}
//	}
//
//	int mult = 1;
//	for (i = 0; i <= count; i++)
//		mult *= arr[i];
//	delete[]arr;
//	return mult;
//}