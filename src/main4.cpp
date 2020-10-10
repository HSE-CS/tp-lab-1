#include "task4.h"
int main() {
	char x[]{ "12345678901234567" };
	char y[]{ "12345678901234567" };
	char *res = sum(x, y);
	for (int i = 0; i < strlen(res); i++)
	{
		cout << res[i];
	}
	cout << endl;
}