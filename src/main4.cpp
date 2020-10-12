#include <malloc.h>
#include <cstring>
#include <iostream>

#include "task4.h"

using namespace std;

int main(){

    char cx[100] = "10770";
    char cy[100] = "113";
    cx[strlen(cx)]='\0';
    cy[strlen(cy)]='\0';

    char * x = cx;
    char * y = cy;

    cout << sum(x,y);

    return 0;
}

/*
10135611370207983538688131010029 - calc

10135611370207983538688131010029 - mine
 */
