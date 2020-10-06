#include "task5.h"
#include <iostream>
#include<string>
#include <cstring>
#include <cstdio>
#include <cstdlib>

using namespace std;

const int len{ 1000 };

void split(char*** result, int* N, char* buf, char ch){
    (*result) = new char* [len]();
    for (int i = 0; i < len; i++) {
        (*result)[i] = new char [len]();
    }
    char* tmp_char;
    string s (1, ch);
    const char* sep = s.c_str();
    tmp_char = strtok(buf, sep);    // âûçîâåì ôóíêöèþ strtok äëÿ ðàçäåëåíèÿ ñòðîêè â buff ïî ïðîáåëàì
    while (tmp_char != NULL) {  ///âûâîäèì ÷àñòè ïîêà îíè ñóùåñòâóþò
        strcpy((*result)[(*N)++], tmp_char);
        tmp_char = strtok(NULL, sep);    ///ïîëó÷èì ñëåäóþùóþ ÷àñòü
    }
}
