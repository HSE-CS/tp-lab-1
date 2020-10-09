#include <iostream>
#include <cstdlib>
#include <cstring>
#include "task4.h"

char * sum(char *x, char *y)
{
	int l=std::max(strlen(x),strlen(y));
    char *s1=(char *)calloc(l+2,sizeof(char));
    char *s2=(char *)calloc(l+2,sizeof(char));
    strcpy(s1+l-strlen(x)+1,x);
    strcpy(s2+l-strlen(y)+1,y);
    for(int i=0; i<=l; i++)
    {
        if(s1[i]) s1[i]-='0';
        if(s2[i]) s2[i]-='0';
    }
    for(int n=0,i=l; i>=0; i--,n/=10)
    {
        n+=s1[i]+s2[i];
        s1[i]=n%10+'0';
    }
    if(s1[0] != '0')
    {
    	free(s2);
    	return s1;
    }
    std::cout << "Hello1" << std::endl;
    char * result = (char*)calloc(strlen(s1)-1,sizeof(char));
    for(int i = 1;i < strlen(s1); i++)
    {
    	result[i-1] = s1[i];

    }




 	free(s1);
    free(s2);
    return result;
}