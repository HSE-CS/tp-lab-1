#include "task5.h"
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

void split(char*** result, int* N, char* buf, char ch) {

	int count = 0;
    int m = 0;
    int n = 0;
    int w = 0;
    int v = 0;

    *N = 0;

	for (int i = 0; i < strlen(buf); i++) {
		if (buf[i] == ch)
			count++;
	}
	*N = count + 1;

    int* size = new int[*N]{ 0 };


    for (int i = 0; i < strlen(buf-1); i++) {

        n++;

        if (buf[i] == ch) {
            m++;
            size[m] = i;
            n = 0;
        }
        }


    size[m]++;

    *result = new char* [*N];

    for (int i = 0; i < (*N); i++) {
        (*result)[i] = new char[size[i]];
    }


    for (int i = 0; i < strlen(buf); i++) {
        if (buf[i] == ch) {
            
            (*result)[w][v] = '\0';
            v = 0;
            w++;
        }

        else {
            (*result)[w][v] = buf[i];
            v++;
        }
    }

    (*result)[w][v] = '\0';
}
	
