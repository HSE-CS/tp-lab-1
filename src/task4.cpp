#include "task4.h"

char * sum(char *x, char *y)
{
	int Sa = strlen(x);
    int Sb = strlen(y);
    int S = ((Sa > Sb) ?  Sa : Sb)+1;
    char* c = (char *) malloc(S);
    memset(c, '_', S);
    c[S] = '\0';
    int z = 0;
    for (int i=1;i< S+1; i++)
	{
        int a1 = (i>Sa) ? 0 : x[Sa-i] - '0'; 
        int b1 = (i>Sb) ? 0 : y[Sb-i] - '0';
        int c1 = a1 + b1 + z;
        c[S-i] = '0' + c1%10;
        z = c1 /10;
    }
    if (c[0]=='0' && c[1]!='0')
	{
        for (int i=0;i<S-1;i++)
            c[i]=c[i+1];
        c[S-1]='\0';
    }
    return c;	
};