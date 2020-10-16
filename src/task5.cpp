#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>

int count_sep(char *buf, char ch){
    int count = 0;
    int left_is_sep = 0;
    for(int i = 0; i < (int)strlen(buf); i++){
        if(buf[i] == ch){
            if(left_is_sep == 0){
                count += 1;
            }
            left_is_sep = 1;
        }
        else{
            left_is_sep = 0;
        }
    }
    return count;
}

int word_end(char *buf, char ch, int index){
    for(; index < (int)strlen(buf); index++){
        if(buf[index] == ch){
            break;
        }
    }
    return index;
}

void split(char ***result, int *N, char *buf, char ch){
    int count_words = (count_sep(buf, ch) + 1);
    (*result) = (char**)malloc(count_words * sizeof(char*));
    int index = 0;
    for(int word_index = 0; word_index < count_words; word_index++){
        while(buf[index] == ch) index += 1;
        int new_index = word_end(buf, ch, index);
        int word_len = new_index - index;
        (*result)[word_index] = (char*)malloc((word_len + 1) * sizeof(char));
        for(int i = 0; i < word_len; i++){
            (*result)[word_index][i] = buf[index + i];
        }
        (*result)[word_index][word_len] = '\0';
        index = new_index;
    }
}
