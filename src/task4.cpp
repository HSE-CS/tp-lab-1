//
// Created by islam on 06.10.2020.
//

#include "task4.h"
#include <iostream>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <cstring>

using namespace std;

char * rev(char* str){
    int n = strlen(str);
    char* Tmp=new char[n];
    for(int i=0, j=n-1; i<n; ++i, --j)
    {
        Tmp[i]=str[j];
    }
    return Tmp;
}

char * sum(char *x, char *y)
{
    unsigned long int size_x = strlen(x);
    unsigned long int size_y = strlen(y);
    unsigned long int res_size;
    unsigned int ost = 0;
    char *maxS;
    char *minS;

    if(size_x > size_y) {
        res_size = size_x + 1;
        maxS = x;
        minS = y;
    }
    else{
        res_size = size_y + 1;
        maxS = y;
        minS = x;
    }

    maxS = rev(maxS);
    minS = rev(minS);

    int *maxint = new int [strlen(maxS) + 1];
    int *minint = new int [strlen(minS)];

    for(int i = 0; i < strlen(maxS); i++)
        maxint[i] = maxS[i] - '0';
    for(int i = 0; i < strlen(minS); i++)
        minint[i] = minS[i] - '0';




    for(int i = 0; i < res_size - 1; i++)
    {
        if(i > strlen(minS))
            ost = 0;
        else
            ost = minint[i];
        maxint[i] += ost;
        maxint[i + 1] += maxint[i] / 10;
        maxint[i] %= 10;
    }

    if(maxint[res_size - 1] == 0)
        res_size--;

    char *result = new char [res_size + 1]{0};
    
    for(int i = 0; i < res_size; i++)
    {
        result[i] = maxint[i] + '0';
    }

    result = rev(result);
  
    return result;

}
