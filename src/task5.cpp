#include "task5.h"
#include <iostream>
#include <cstring>


using namespace std;


void split(char*** result, int* N, char* buf, char ch){
    const int len{ 1000 };

    (*result) = new char* [len]();
    for (int i = 0; i < len; i++) {
        (*result)[i] = new char [len]();
    }
    char* tmp_char;
    string s;
    s += ch;
    s += '\0';
    const char* sep = s.c_str();
    tmp_char = strtok(buf, sep);    // âûçîâåì ôóíêöèþ strtok äëÿ ðàçäåëåíèÿ ñòðîêè â buff ïî ïðîáåëàì
    while (tmp_char != NULL) {  ///âûâîäèì ÷àñòè ïîêà îíè ñóùåñòâóþò
        strcpy((*result)[(*N)], tmp_char);
        (*result)[(*N)][strlen(tmp_char)] = '\0';
        tmp_char = strtok(NULL, sep);    ///получим следующую часть
        (*N)++;
    }
}
