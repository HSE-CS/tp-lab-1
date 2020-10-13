#include "task4.h"
#include <cstring>
#include <string.h>
char * sum(char *x, char *y){

    char* plus = new char [strlen(x)+1];
    for (int i = 0; i <= strlen(x); i++)
        plus[i] = 0;

    int d = 0;
    int isum = 0;

    int ix = strlen(x) - 1; //-'0'
    int iy = strlen(y) - 1;

    /* while (ix >= 0)
     {
         int slag_x = (x[ix--] - '0') + d;
         plus[isum++] = '0' + slag_x % 10;
         d = slag_x / 10;
     }*/

    while (iy >= 0) {
        int slag_y = (x[ix--] - '0') + (y[iy--] - '0') + d;
        plus[isum++] = '0' + slag_y % 10;
        d = slag_y / 10;
    }

     while (ix >= 0)
    {
        int slag_x = (x[ix--] - '0') + d;
        plus[isum++] = '0' + slag_x % 10;
        d = slag_x / 10;
    }

    if (d)
        plus[isum++] = '0' + d;

    plus[isum] = '\0';

    char* fin = new char[strlen(plus)];

    for (int i = strlen(plus) - 1; i >= 0; i--)
        fin[isum - i - 1] = plus[i];

    fin[isum] = '\0';

   // delete [] plus;
    return fin;


}