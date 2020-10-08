#include"task4.h"

char* sum(char* x, char* y) {
	unsigned int lenX = strlen(x);
	unsigned int lenY = strlen(y);
	unsigned int len = std::max(lenX,lenY);
	std::cout << x << "\n" << y << "\n";
	if (lenX != lenY) {
		if (lenX > lenY) {
			char* buf = new char[lenX - lenY];
			for (unsigned int i = 0; i <= lenX - lenY; i++) {
				buf[i] = '0';
			}
			
			buf[lenX - lenY] = 0;
			y = strcat(buf, y);
		}
		else {
			char* buf = new char[len + 1];
			for (unsigned int i = 0; i <= lenY - lenX; i++) {
				buf[i] = '0';
			}
			buf[lenY - lenX] = 0;
			x = strcat(buf, x);
		}
	}
	bool overFlow = false;
	char* su = new char[len + 2];
	su[len + 1] = 0;
	for (unsigned i = 0; i <=len ; i++) {
		if (i == len) {
			su[0] = '0' + overFlow;
			break;
		}
		su[len - i] = x[len - i - 1] + y[len - i - 1] + overFlow - '0';
		overFlow = false;
		if (su[len - i] > '9') {
			overFlow = true;
			su[len - i] = su[len - i] - 10;
		}
	}
	if (su[0] == '0') return su + 1;
	return su;
}
