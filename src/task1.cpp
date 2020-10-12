#include "task1.h"
#include <algorithm>
#include <map>
#include <iostream>

map<int, int> del(int x) {
	map<int, int> tmp;
	for (int i = 2; i <= sqrt(x); i++) {
		while (x % i == 0) {
			tmp[i]++;
			x /= i;
		}
	}
	if (x != 1) {
		tmp[x]++;
	}
	return tmp;
}

unsigned long findValue(unsigned int min, unsigned max) {
	map<int, int> result;
	for (int elem = min; elem <= max; elem++) {
		map<int, int> tmp = del(elem);
		for (const auto& item : tmp) {
			if ( result[item.first] < tmp[item.first]) {
				result[item.first] = tmp[item.first];
			}
		}
	}
	unsigned long number = 1;
	for (const auto& item : result) {
		cout << item.first << " " << item.second << endl;
	}
	for (const auto& item : result) {
		number *= pow(item.first , item.second);
	}
	return number;
}