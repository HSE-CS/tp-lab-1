#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "task5.h"
#include <cstring>
#include <cstdlib>
#define BUF 1000

using namespace std;

void split(char*** result, int* N, char* buf, char ch) {
	char raz[] = { ' ', '\0' };
	char* s = (char*)calloc(strlen(buf)+1, sizeof(char));
	s = strtok(buf, raz);
	*result = (char**)calloc((strlen(buf) + BUF), sizeof(char*));
	int i = 0;
	while (s) {
		(*result)[i] = (char*)calloc(strlen(s) + 2, sizeof(char));
		(*result)[i] = s;
		cout << (*result)[i] << endl;
		s = strtok(NULL, raz);
		++i;
	}
	*N = i;
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

