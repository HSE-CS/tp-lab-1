#include <iostream>
#include <cstring>
#include <algorithm>
#include "task4.h"
#define SIZE 10000

using namespace std;

char* reversit(char *a, int maxsize)
{
	int a1, a2, a3;
	char *c = (char*)calloc(maxsize + 2, sizeof(char));
	a1 = strlen(a);
	a3 = a1;
	for (a2 = 0; a2 < a1; a2++, a3--)
		c[a2] = a[a3 - 1];
	return c;
}

char* sum(char* x, char* y) {
	//char result[SIZE] = { 0 };
	//int i = 0;
	//int f1 = 0;
	//int f2 = 0;
	//int buf = 0;
	//int maxs = 0;
	//if (strlen(x) > strlen(y)) {
	//	maxs = 1;
	//}
	//else if (strlen(x) < strlen(y)) {
	//	maxs = 2;
	//}
	//else if (strlen(x) == strlen(y)) {
	//	maxs = 3;
	//}
	//int count1 = strlen(x)-1;
	//int count2 =  strlen(y)-1;
	//while((count1>-1)&& (count2 > -1)) {
	//	f1 = (int)x[count1] - 48;
	//	f2 = (int)y[count2] - 48;
	//	result[max(count1, count2)] = (char)((f1 + f2) % 10 + buf + 48);
	//	//cout << result[max(count1, count2)] << endl;
	//	if (f1 + f2 + buf >= 10)
	//		buf = 1;
	//	else
	//		buf = 0;
	//	--count1;
	//	--count2;
	//}

	//count1 = max(count1, count2);

	//if (maxs == 1) {
	//	if ((x[count1] == '9') && (buf == 1)) {
	//		x[count1] = '0';
	//		if (count1 == 0) {
	//			for (i = strlen(result); i > -1; --i) {
	//				result[i + 1] = result[i];
	//			}
	//			result[0] = '1';
	//		}
	//		else {
	//			--count1;
	//			result[count1] = x[count1] + 1;
	//			while (count1 != -1) {
	//				result[count1] = x[count1];
	//				--count1;
	//			}
	//		}
	//	}
	//	else {
	//		while (count1 != -1) {
	//			result[count1] = x[count1] + buf;
	//			//cout << result[count1] << endl;
	//			buf = 0;
	//			--count1;
	//		}
	//	}
	//}
	//else if (maxs == 2) {
	//	if ((y[count1] == '9') && (buf == 1)) {
	//		y[count1] = '0';
	//		if (count1 == 0) {
	//			for (i = strlen(result); i > -1; --i) {
	//				result[i + 1] = result[i];
	//			}
	//			result[0] = '1';
	//		}
	//		else {
	//			--count1;
	//			result[count1] = y[count1] + 1;
	//			while (count1 != -1) {
	//				result[count1] = y[count1];
	//				--count1;
	//			}
	//		}
	//	}
	//	else {
	//		while (count1 != -1) {
	//			result[count1] = y[count1] + buf;
	//			buf = 0;
	//			--count1;
	//		}
	//	}
	//}
	//else {
	//	if ((buf == 1)) {
	//		for (i = strlen(result); i > -1; --i) {
	//			result[i + 1] = result[i];	
	//		}
	//		result[0] = '1';
	//	}
	//}
	//cout << result << endl;
	//return result;
	int size_a = strlen(x);
	int size_b = strlen(y);
	int maxsize = max(strlen(x), strlen(y));
	int f1 = 0;
	int f2 = 0;
	int result = 0;
	int buf = 0;
	x = reversit(x, maxsize);
	y = reversit(y, maxsize);

	int length = 0;
	if (size_a < size_b)
		length = size_b + 1;
	else
		length = size_a + 1;

	int ix = 0;
	for (ix = 0; ix < maxsize; ix++)
	{
		if (y[ix]) {
			f1 = y[ix] - 48;
		}
		else {
			f1 = y[ix];
		}
		if (x[ix]) {
			f2 = x[ix] - 48;
		}
		else {
			f2 = x[ix];
		}
		result = (f1 + f2 + buf) % 10;
		buf = (f1 + f2 + buf) / 10;
		y[ix] = (char)result + 48; 
	}
	--ix;
	if (buf == 1) {
		y[ix+1] = '1';
	}
	else
		ix--;
	y = reversit(y,maxsize);
	cout << y << endl;
	return y;
}
