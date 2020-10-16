//Ðåàëèçîâàòü ôóíêöèþ ñëîæåíèÿ äâóõ ñâåðõäëèííûõ ÷èñåë, çàäàííûõ â âèäå ñòðîê

#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "task4.h"

int main() {

	char *n1 = "568486";
	char *n2 = "9625154";
	char* ans = sum(n1, n2);

	for (int i = 0; ans[i] != '\0'; i++)

		printf("%s", ans[i]);

	return 0;
}
