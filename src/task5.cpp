#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "task5.h"
#include <cstring>
#include <cstdlib>

using namespace std;

void split(char*** result, int* N, char* buf, char ch) {
	string a = buf;
	string buffer;
	int k = 0;
	(*result) = (char**)calloc(a.length(), sizeof(char*));
	int razdel = 0;
	for (int i = 0; i < a.length(); ++i) {
		if (a[i] == ch) {
			buffer = a.substr(razdel, i);
			razdel = i + 1;
			(*result)[k] = (char*)calloc(buffer.length(), sizeof(char));
			++k;
			//cout << (*result)[k] << endl;
		}
	}
	*N = k;
	/*char raz[] = { ' ', '\0' };
	char* s = (char*)calloc(a.length(), sizeof(char));
	cout << a.length() << endl;
	*result = (char**)calloc(a.length() + 1, sizeof(char*));
	int i = 0;
	while (s) {
		(*result)[i] = (char*)calloc(strlen(s) + 1, sizeof(char));
		(*result)[i] = s;
		cout << (*result)[i] << endl;
		s = strtok(NULL, raz);
		++i;
	}
	*N = i;
	free(s);*/
}


//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include "task5.h"
//#include <vector>
//#include <cstring>
//
//using namespace std;
//
//void split(char*** result, int* N, char* buf, char ch) {
//	vector<char> a(strlen(buf) + 1);
//	vector<vector<char>> S;
//	for (int i = 0; i < strlen(buf) + 1; ++i) {
//		a[i] = buf[i];
//	}
//	char raz[] = { ' ' };
//
//	char* s = strtok(buf, raz);
//	*result = (char**)malloc(sizeof(char) * (strlen(buf) + 2));
//	int i = 0;
//	while (s) {
//		S.push_back(s);
//		//cout << (*result)[i] << endl;
//		s = strtok(NULL, raz);
//		++i;
//	}
//	for (int i = 0; i < S.size(); ++i) {
//		(*result)[i] = (char*)malloc(sizeof(char) * (S[i].size() + 2));
//		for (int j = 0; j < S[i].size(); j++) {
//			(*result)[i][j] = S[i][j];
//		}
//	}
//
//	*N = i;
//}

