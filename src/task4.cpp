//
// Created by Алексей Трутнев on 05.10.2020.
//

#include "task4.h"
#include <cstring>
#include <algorithm>
using namespace std;


char *sum(char *x, char *y){
    unsigned int lenX = strlen(x);
    unsigned int lenY = strlen(y);
    unsigned int maxLength = max(lenX, lenY);
    bool overflow = false;
    char *expand_x = new char[maxLength + 1];
    char *expand_y = new char[maxLength + 1];
    if (lenX > lenY){
        for (unsigned int i = {0}; i < lenX - lenY; i++) expand_y[i] = '0';
        for (unsigned int i = {lenX - lenY}; i < lenX; i++) expand_y[i] = (char) y[i - lenX + lenY];
        for (unsigned int i = {0}; i < lenX; i++) expand_x[i] = (char) x[i];
    } else if (lenY > lenX){
        for (unsigned int i = {0}; i < lenY - lenX; i++) expand_x[i] = '0';
        for (unsigned int i = {lenY - lenX}; i < lenY; i++) expand_x[i] = (char) x[i - lenY + lenX];
        for (unsigned int i = {0}; i < lenY; i++) expand_y[i] = (char) y[i];
    } else if (lenX == lenY){
        for (unsigned int i = {0}; i < lenX; i++){
            expand_x[i] = (char) x[i];
            expand_y[i] = (char) y[i];
        }
    }
    char *temp = new char[maxLength + 2];
//    for (unsigned int i = {0}; i <= maxLength; i++){
//        if (i == maxLength){
//            temp[0] = (char) ('0' + overflow);
//            break;
//        }
//        temp[maxLength - i] = (char) (expand_x[maxLength - i - 1] + expand_y[maxLength - i - 1] + overflow - '0');
//        overflow = false;
//        if (temp[maxLength - i] > '9'){
//            overflow = true;
//            temp[maxLength - i] -= 10;
//        }
//    }

    for (unsigned int i = {maxLength}; i >= 0; i--){
        if (i == 0){
            temp[0] = (char) ('0' + overflow);
            break;
        }
        temp[i] = (char) (expand_x[i - 1] + expand_y[i - 1] + overflow - '0');
        overflow = false;
        if (temp[i] > '9'){
            overflow = true;
            temp[i] -= 10;
        }
    }
    delete [] expand_x;
    delete [] expand_y;
    temp[maxLength + 1] = '\0';
    if (temp[0] == '0') return ++temp;
    return temp;
}

