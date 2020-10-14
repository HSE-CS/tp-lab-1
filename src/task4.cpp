#include"task4.h"

char* sum(const char* x, const char* y) {


	unsigned int len = 0;
	if (strlen(x) > strlen(y)) {
		char* str = new char[strlen(x) + 1];
		char* _new = new char[strlen(x)];

		int i = 0;
		int k = strlen(x) - 1;
		str[k + 2] = '\0';
		_new[k + 1] = '\0';
		while (i != strlen(x) - strlen(y)) {
			_new[i] = '0';
			i++;
		}
		int j = 0;
		while (j != strlen(y)) {
			_new[i] = y[j];
			j++;
			i++;
		}
		i = 0;
		int _ost = 0;

		while (i != strlen(x)) {
			if (x[k] - 48 + _new[k] - 48 >= 10) {
				str[k + 1] = ((x[k] - 48 + _new[k] - 48) % 10) + 48 + _ost;
				_ost = 1;
			}
			else if (x[k] - 48 + _new[k] - 48 < 10) {
				if ((x[k] - 48 + _new[k] - 48) + _ost >= 10) {
					str[k + 1] = (((x[k] - 48 + _new[k] - 48) + _ost) % 10) + 48;
					_ost = 1;
				}
				else {
					str[k + 1] = ((x[k] - 48 + _new[k] - 48) % 10) + 48 + _ost;
					_ost = 0;
				}
			}
			k--;
			i++;
		}

		if (_ost != 0) {
			str[0] = _ost + 48;
		}


		if (str[0] < 48 || str[0] > 57) {
			for (int i = 0; i < strlen(str); i++) {
				str[i] = str[i + 1];
			}
			str[strlen(str) + 1] = '\0';
		}

		return str;
	}
	else {
		char* str = new char[strlen(y) + 1];
		char* _new = new char[strlen(y)];

		int i = 0;
		int k = strlen(y) - 1;
		str[k + 2] = '\0';
		_new[k + 1] = '\0';
		while (i != strlen(y) - strlen(x)) {
			_new[i] = '0';
			i++;
		}
		int j = 0;
		while (j != strlen(x)) {
			_new[i] = y[j];
			j++;
			i++;
		}
		i = 0;
		int _ost = 0;

		while (i != strlen(y)) {
			if (x[k] - 48 + _new[k] - 48 >= 10) {
				str[k + 1] = ((x[k] - 48 + _new[k] - 48) % 10) + 48 + _ost;
				_ost = 1;
			}
			else if (x[k] - 48 + _new[k] - 48 < 10) {
				if ((x[k] - 48 + _new[k] - 48) + _ost >= 10) {
					str[k + 1] = (((x[k] - 48 + _new[k] - 48) + _ost) % 10) + 48;
					_ost = 1;
				}
				else {
					str[k + 1] = ((x[k] - 48 + _new[k] - 48) % 10) + 48 + _ost;
					_ost = 0;
				}
			}
			k--;
			i++;
		}

		if (_ost != 0) {
			str[0] = _ost + 48;
		}


		if (str[0] < 48 || str[0] > 57) {
			for (int i = 0; i < strlen(str); i++) {
				str[i] = str[i + 1];
			}
			str[strlen(str) + 1] = '\0';
		}

		return str;
	}


}