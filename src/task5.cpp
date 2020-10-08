//
//  task1.cpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#include "task5.h"
#include <iostream>
#include <cstring>

using namespace std;

void split(char*** result, int* N, char* buf, char ch)
{
    int counter = 1;
    unsigned int string_len = strlen(buf);
    
    for (int i = 0; i < string_len; i++)
        if (buf[i] == ch)
            counter++;
    *N = counter;
    counter = 0;

    (*result) = new char* [*N];
    for (int i = 0; i < *N; i++){
        (*result)[i] = new char[string_len];
        (*result)[i][0] = '\0';
    }
    
    int word_start = 0;
    for (int i = 0; i <= string_len; i++){
        if (buf[i] == ch || i == string_len){
            int word_length = i - word_start;
                  for (int j = 0; j < word_length; j++)
                      (*result)[counter][j] = buf[word_start++];
                  
                  (*result)[counter++][word_length] = '\0';
                  word_start = i + 1;
        }
    }

}
