#ifndef TASK1_TASK5_CPP
#define TASK1_TASK5_CPP

#include "task5.h"

int maxWordLength(char *s, int len, char sep){
    int tmp = 0, max = 0;
    for (int i = 0; i < len; ++i) {
        if (s[i] != sep){
            ++tmp;
            if (tmp > max)
                max = tmp;
        }
        else
            tmp = 0;
    }
    return max;
}

int charCounter(char *s, char c){
    int counter = 0;
    for (int i = 0; i < strlen(s); ++i)
        if (s[i] == c)
            counter++;
    return counter;
}

void set0Str(char *s, int len){
    for (int i = 0; i < len; ++i) {
        s[i] = '\0';
    }
}

void split(char ***result, int *N, char *buf, char ch){
    *N = charCounter(buf, ch) + 1;
    int buf_length = strlen(buf);
    int max_word_length = maxWordLength(buf, buf_length, ch) + 1;
    *result = new char *[*N];
    int j = 0, counter = 0;
    (*result)[j] = (char *)malloc(max_word_length);
    set0Str((*result)[j], max_word_length);
    cout << "N: " << *N <<',' <<
            " buf_length: "  << buf_length << ',' <<
            " max_world_length: "<< max_word_length << endl;
    for (int i = 0; i < buf_length; ++i) {
        if (buf[i] != ch){
            //cout << strlen((*result)[j]) << ' ';
            (*result)[j][counter] = buf[i];
            ++counter;
            //cout << buf[i] << endl;
        } else {
            //cout << (*result)[j] << endl;
            ++j;
            counter = 0;
            (*result)[j] = (char *) malloc(max_word_length);
            set0Str((*result)[j], max_word_length);
        }
    }
}

#endif //TASK1_TASK5_CPP