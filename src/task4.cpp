//
// Created by Алексей Трутнев on 05.10.2020.
//

#include "task4.h"
#include <cstring>
#include <algorithm>
using namespace std;


//char *sum(char *x, char *y){
//    unsigned int lenX = strlen(x);
//    unsigned int lenY = strlen(y);
//    unsigned int maxLength = max(lenX, lenY);
//    bool overflow = false;
//    if (lenX > lenY){
//        char *buf = new char[lenX - lenY];
//        for (unsigned int i = {0}; i < lenX - lenY; i++) buf[i] = '0';
//        buf[lenX - lenY] = {0};
//        y = strcat(buf, y);
//    } else if (lenY > lenX){
//        char *buf = new char[maxLength + 1];
//        for (unsigned int i = {0}; i < lenY - lenX; i++) buf[i] = '0';
//        buf[lenY - lenX] = {0};
//        x = strcat(buf, x);
//    }
//    char *temp = new char[maxLength + 2];
//    temp[maxLength + 1] = '\0';
//    for (unsigned int i = 0; i <= maxLength; i++) {
//        if (i == maxLength) {
//            temp[0] = '0' + overflow;
//            break;
//        }
//        temp[maxLength - i] = x[maxLength - i - 1] + y[maxLength - i - 1] + overflow - '0';
//        overflow = false;
//        if (temp[maxLength - i] > '9') {
//            overflow = true;
//            temp[maxLength - i] = temp[maxLength - i] - 10;
//        }
//    }
//    if (temp[0] == '0') return temp + 1;
//    return temp;
//}
//

char *sum(char *x, char *y){
     unsigned int lenX = strlen(x);
     unsigned int lenY = strlen(y);
     unsigned int maxLength = max(lenX, lenY);
     char *buf = new char[maxLength + 1];
     bool overflow = false;
    if (lenX > lenY){
        char *buf_temp = new char[lenX - lenY];
        for (unsigned int i = {0}; i < lenX - lenY; i++) buf_temp[i] = '0';
        buf_temp[lenX - lenY] = {0};
        y = strcat(buf_temp, y);
    } else if (lenY > lenX){
        char *buf_temp = new char[maxLength + 1];
        for (unsigned int i = {0}; i < lenY - lenX; i++) buf_temp[i] = '0';
        buf_temp[lenY - lenX] = {0};
        x = strcat(buf_temp, x);
    }
     for (int i = (int)(maxLength - 1); i >= 0; i--) {
         buf[i] = (char) (x[i] + y[i] + overflow - '0');
         overflow = false;
         if (buf[i] > '9') {
             buf[i] = (char) (buf[i] - 10);
             overflow = true;
             if (0 == i) {
                 char *buf1 = new char[maxLength];
                 buf1[0] = '1';
                 buf = strcat(buf1, buf);
             }
         }
         if (0 == i && 0 == overflow) buf[maxLength] = '\0';
     }
     return buf;
 }
