#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#include <algorithm>
#include <string>
#include <string.h>


char* sum(char* x, char* y) {

    int lengX = strlen(x), lengY = strlen(y);

    if (lengX == lengY){
        char* res = new char[std::max(lengX + 1, lengY + 1)];
        int s = 0;
        for (int of = lengX - 1; of >= 0; of--){
            int a = (int)(x[of] - '0');
            int b = (int)(y[of] - '0');
            if (s)
            {
                a++;
                s = 0;
            }
            if (a + b > 9)
            {
                res[of + 1] = (char)(((a + b) % 10) + '0');
                s++;
            }
            else
                res[of + 1] = (char)((a + b) % 10 + '0');
        }
        if (s == 1){
            res[0] = '1';
        }
        else{
            char* res2 = new char[std::max(lengX + 1, lengY + 1)];
            for (int of = strlen(res) - 1; of >= 0; of--){
                res2[of] = res[of + 1];
            }
            delete[] res;
            res2[std::max(lengX, lengY)] = '\0';
            return res2;
        }
        res[std::max(lengX + 1, (lengY + 1))] = '\0';
        return res;
    }
    else{

        if (lengX < lengY){
            char* temp = new char[lengY];
            strcpy(temp, y);
            y = x;
            x = temp;
        }

        char* res = new char[std::max(lengX + 1, (lengY + 1))];
        int leny = lengY - 1;
        char* newstr = new char[std::max(lengX, (lengY)) + 1];
        for (int g = lengX - 1; g >= 0; g--){

            if (leny >= 0){
                newstr[g] = y[leny];
                leny--;
            }
            else{
                newstr[g] = ' ';
            }
        }
        newstr[std::max(lengX, (lengY))] = '\0';
        int save = 0;
        for (int of = lengX - 1; of >= 0; of--){
            int a = (int)x[of] - '0';
            if (newstr[of] != ' '){
                int b = (int)newstr[of] - '0';
                if (save){
                    a++;
                    save = 0;
                }
                if (a + b > 9){
                    res[of + 1] = (char)(((a + b) % 10) + '0');
                    save++;
                }
                else
                    res[of + 1] = (char)((a + b) + '0');
            }
            else{
                if (save){
                    a++;
                    save = 0;
                }
                if (a > 9){
                    res[of + 1] = (char)(((a) % 10) + '0');
                    save++;
                }
                else
                    res[of + 1] = (char)((a)+'0');
            }
        }
        delete[] newstr;
        if (save == 1){
            res[0] = '1';
        }
        else{
            char* res2 = new char[std::max(lengX + 1, (lengY + 1))];
            for (int of = strlen(res) - 1; of >= 0; of--){
                res2[of] = res[of + 1];
            }
            delete[] res;
            res2[std::max(lengX, (lengY))] = '\0';
            return res2;
        }
        res[std::max(lengX + 1, (lengY + 1))] = '\0';
        return res;
    }

}