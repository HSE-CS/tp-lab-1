#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <math.h>
#include <map>
#include <vector>

map<int, int> fact(int n) {
	map<int, int> mp;
	for (int i = 2; i <= sqrt(n); i++)
	{
		while (n % i == 0)
		{
			mp[i]+=1;
			n /= i;
		}
	}
	if (n != 1)
	{
		mp[n] += 1;
	}
	return mp;
}
unsigned long findValue(unsigned int min, unsigned max)
{
	
	map<int, int> res;
	for (int i = min; i <= max; i++)
	{	map<int, int> all_delit=fact(i);
		for (const auto &it : all_delit) {
				if (res[it.first] < all_delit[it.first])
					res[it.first] = all_delit[it.first];

		}
		
	}
	unsigned long result = 1;
	for (const auto &k : res)
	{
		result *= pow(k.first, k.second);
	}
	return result;
}