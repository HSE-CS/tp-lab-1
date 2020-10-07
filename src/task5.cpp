
#include "task5.h"
#include <cstring>
#include<string.h>
#include <stdio.h>


 void split(char*** result, int* N, char* buf, char ch) {
         const int len = 1000;
	 int counter{ 0 };
	 (*result) = new char* [len]();
	 for (int i = 0; i < len; i++) {
		 (*result)[i] = new char[len]();
	 }

	 for (int i = 0; i <= strlen(buf); i++) {
		 if (buf[i] == ch) {
			 (*result)[(*N)++][counter] = '\0';
			 counter = 0;
			 continue;
		 }
		 (*result)[(*N)][counter++] = buf[i];
	 }
	 (*N)++;
}
