#include "task4.h"
#include <string.h>

int main() {
	char x[]{ "1234567890" };
	char y[]{ "1234567890" };
	char *res = sum(x, y);
	for (int i = 0; i < strlen(res); i++)
	{
		cout << res[i];
	}
	cout << endl;
	free(res);
}