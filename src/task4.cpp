#include "task4.h"
#include <cstring>

char * sum(char *x, char *y){
    int n=strlen(x)-1,m=strlen(y)-1;
    int mas_size = 0;
    if(n>m)
        mas_size=n+1;
    else
        mas_size=m+1;
    char* mas = new char[mas_size+1]();
    int tek_size=0;
    while (tek_size<mas_size){
        if (n < -1){
            n += 1;
        }
        if (m < -1){
            m += 1;
        }
        int res_x = (x[n--]-'0'), res_y = (y[m--]-'0');
        if (res_x == -48){
            res_x =0;
        }
        if (res_y == -48){
            res_y =0;
        }
        int res = res_x + res_y;
        int tek = mas[tek_size]-'0';
        if (tek == -48)
            tek =0;
        int sum = res+tek;
        mas[tek_size++]='0'+sum%10;
        if(sum/10!=0) {
            mas[tek_size] = '0' + sum / 10;
        }
    }
//    reversing for answer
    char* ans = new char[mas_size+1]();
    int j=0;
    if (mas[mas_size] != '\0'){
        char tmp = mas[mas_size];
        ans[j++]= tmp;
    }
    for (int i=mas_size-1;i>=0;i--){
        char tmp = mas[i];
        ans[j++]=tmp;
    }
    ans[j]='\0';
    delete [] mas;
    return ans;
}