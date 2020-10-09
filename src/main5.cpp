#include <iostream>
#include "task5.h"
int main()
{
	char ** res = 0;
	int n;
	split(&res,&n,"HelloWorld",' ');
	for(int i = 0; i <= n; i++)
			std::cout<<res[i]<<std::endl;
		return 0;
}