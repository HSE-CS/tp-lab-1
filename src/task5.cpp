#include <iostream>
#include <cstdlib>
#include <cstring>
#include "task5.h"

void split(char ***result, int *N, char *buf, char ch)
{
	(*N) = 0;
	int count  = 0;
	
	for(int i = 0; i < strlen(buf);i++)
	{
		if(buf[i] == ch)
			count++;
	}
	(*(result)) = (char**)calloc(count+1,sizeof(char*));
	if(count == 0)
	{
		(*(result))[0] = (char*)calloc(strlen(buf)+1,sizeof(char));
		strcpy((*(result))[0],buf);
		return;
	}

	count = 0;
	int j = 0;
	(*(result))[0] = (char*)calloc(strlen(buf)+1,sizeof(char));
	
	for(int i = 0; i< strlen(buf); i++)
	{

		if(buf[i] == ch)
		{
						
			(*N)++;
			j = 0;
			count++;
			(*(result))[count] = (char*)calloc(strlen(buf)+1,sizeof(char));

			continue;
		}

		((*(result))[count])[j] = buf[i];
		j++;

	}





}