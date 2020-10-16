#pragma warning(disable : 4996)
#include "task4.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <cstring>
#include <algorithm>
#include <string>

int in(char a)//char â int
{
	return (int)a - 48;
}
char ch(int a)//int â char
{
	return a + 48;
}
char *sum(char *x, char *y) {
	string ans;
	string ans2;
	string a = x;
	string b = y;
	string rev_a;
	string rev_b;

	for (int i = a.size() - 1; i > -1; --i)
		rev_a += a[i];
	for (int i = b.size() - 1; i > -1; --i)
		rev_b += b[i];

	unsigned i = 0;
	int rem = 0;

	while (i < rev_a.size() && i < rev_b.size()) {
		int h1 = in(rev_a[i]);
		int h2 = in(rev_b[i]);
		ans += ch((h1 + h2 + rem) % 10);
		rem = (h1 + h2 + rem) / 10;
		++i;
	}
	while (i < rev_a.size()) {
		int h1 = in(rev_a[i]);
		ans += ch((h1 + rem) % 10);
		rem = (h1 + rem) / 10;
		++i;
	}
	while (i < rev_b.size()) {
		int h2 = in(rev_b[i]);
		ans += ch((h2 + rem) % 10);
		rem = (h2 + rem) / 10;
		++i;
	}
	if (rem) {
		ans += ch(rem);
	}

	for (int i = ans.size() - 1; i > -1; --i)
		ans2 += ans[i];
	ans = ans2;
	char* ans_char = new char[ans.size()];
	strcpy(ans_char, ans.c_str());
	return ans_char;
}
