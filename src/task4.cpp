#include <string>
#include <vector>
#include <cstring>
#include <algorithm>
#include "task4.h"

using namespace std;
vector<char> sum_vect (vector<char>& l, vector<char>& r) {
	size_t j;
	for (j = 0; j < l.size() && l[j] == '0'; j++);
	l.erase(l.begin(), l.begin()+j); 				

	for (j = 0; j < r.size() && r[j] == '0'; j++);
	r.erase(r.begin(), r.begin()+j);

	reverse(l.begin(), l.end());				
	reverse(r.begin(), r.end());

	for (auto& i : l) { i -= '0'; }
	for (auto& i : r) { i -= '0'; }

	auto maxl = l.size() >= r.size() ? l : r;
	auto minl = l.size() < r.size() ? l : r;

	int p = 0;

	for (size_t i = 0; i < maxl.size(); i++) {

		if ( i < minl.size() )
			maxl[i] += minl[i] + p;
		else
			maxl[i] += p;

		p = 0;

		if ( maxl[i] >= 10 ) {
			p++;
			maxl[i] %= 10;
		}
	}
	if (p > 0) {
		maxl.push_back(p);
	}

	for (auto& n : maxl)
		n+='0';

	reverse(maxl.begin(), maxl.end());

	return maxl;
}

char * sum(char *x, char *y) {
	vector<char> a(x, x + strlen(x));
	vector<char> b(y, y + strlen(y));

	vector<char> res = sum_vect (a, b);
	string ww (res.begin(), res.end());

	char * p = new char [ww.length()];
	strcpy(p, ww.c_str());
	return p;
} 
