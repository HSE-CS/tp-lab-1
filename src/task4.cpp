#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include "task4.h"
using namespace std;

#define SIZE 1000

char* sum(char* x, char* y) {

char* ans;
long len = 0;
int num1 = 0;
int num2 = 0;
int num3 = 0;
int b = 0;
	
if (strlen(x) >= strlen(y))
	len = strlen(x);
else
	len = strlen(y);
	
ans = (char*)malloc((len + 1) * sizeof(char));
	
for (int i = 0; i < len + 1; i++) {
	
 	if (strlen(x) <= i)
      		num1 = 0;
   	else
     	 	num1 = x[strlen(x) - i - 1] - '0';

    	if (strlen(y) <= i)
      		num2 = 0;
    	else
      		num2 = y[strlen(y) - i - 1] - '0';

    	num3 = num1 + num2 + b;

    	b = num3 / 10;
    	num3 = num3 % 10;
    	ans[i] = num3 + '0';

  }

if (ans[len] == '0')
       --len;

reverse(ans, ans + len + 1);

ans[len + 1] = '\0';
if (len == 0) {
	   
   	ans[0] = '0';
       	ans[1] = '\0';
	   
   }
	
return ans;

free(n1);
free(n2);
free(ans);

}
