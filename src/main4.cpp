#include <iostream>
#include <cstdlib>
#include "task4.h"
#include <malloc.h>

int main() {
	char *str1 = "498575";
	char *str2 = "7843975";
	char* ans = sum(str1,str2);
	for (int i = 0; ans[i] != '\0'; i++) {
		printf("%s", ans[i]);
	}
		
	return 0;
}
