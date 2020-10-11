#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include "task4.h"

using namespace std; 
char * sum(char *x, char *y){
    char* a=x;
    char* b=y;
    if (strlen(a)<strlen(b)){
        char* t;
        strcpy(t,a);
        strcpy(a,b);
        strcpy(b,t);
    }
    int t=0,f=0,j=0,r=0;
    
    for (int i=strlen(b);i>-1;i--){
        j=strlen(a);
        t=b[i]-'0';
        r=a[j]-'0';
        a[j]=(((r+t)%10)+f)+'0';
        f=(r+t)/10;
        j--;
    }
    char* s='';
    if (f!=0){
        char l=f+'0';
        s=l+a;
    }
    else s=a;
    return s;
}