#include"task4.h"

char* sum(char* x, char* y) {
	unsigned int lenX = strlen(x);
	unsigned int lenY = strlen(y);
	unsigned int len = std::max(lenX,lenY);
	char* x1 = new char[len+1];
	char* y1 = new char[len+1];
//	std::cout << x << "\n" << y << "\n";
	if (lenX != lenY) {
		if (lenX > lenY) {
			for (unsigned int i = 0; i < lenX - lenY; i++) {
				y1[i] = '0';
			}			
			for (unsigned int i = 0; i <= lenY; i++) {
				y1[i+ lenX - lenY] = y[i];
			}
			
			for (unsigned int i = 0; i <= len; i++) {
				x1[i] = x[i];
			}
			/*std::cout << y1 << "\n";
			std::cout << x1 << "\n";*/
		}
		else {
			for (unsigned int i = 0; i < lenY - lenX; i++) {
				x1[i] = '0';
			}
			for (unsigned int i = 0; i <= lenX; i++) {
				x1[i + lenX - lenY] = y[i];
			}
			for (unsigned int i = 0; i <= len; i++) {
				y1[i] = y[i];
			}
			//std::cout << x1 << "\n";
		}
	} else for (unsigned int i = 0; i <= len; i++) {
		x1[i] = x[i];
		y1[i] = y[i];
	}
	bool overFlow = false;
	char* su = new char[len + 3];
	su[len + 1] = 0;
	for (unsigned i = 0; i <=len ; i++) {
		if (i == len) {
			su[0] = '0' + overFlow;
			break;
		}
		su[len - i] = x1[len - i - 1] + y1[len - i - 1] + overFlow - '0';
		overFlow = false;
		if (su[len - i] > '9') {
			overFlow = true;
			su[len - i] = su[len - i] - 10;
		}
	}
	if (su[0] == '0') return su + 1;
	return su;
}
