
#include "task5.h"
#include <cstring>


 void split(char*** result, int* N, char* buf, char ch) {
        const int len = 1000;
        (*result) = new char* [len]();
        for (int i = 0; i < len; i++) {
            (*result)[i] = new char[len]();
        }
        char* tmp_char;
        string s;
        s += ch;
        s += '\0';
        const char* sep = s.c_str();
        char* next_token1 = NULL;
        tmp_char = strtok_s(buf, sep,&next_token1);    // âûçîâåì ôóíêöèþ strtok äëÿ ðàçäåëåíèÿ ñòðîêè â buff ïî ïðîáåëàì
        while (tmp_char != NULL) {  ///âûâîäèì ÷àñòè ïîêà îíè ñóùåñòâóþò
            (*result)[(*N)++]=tmp_char;
            tmp_char = strtok_s(NULL, sep, &next_token1);    ///получим следующую часть
        }
}
