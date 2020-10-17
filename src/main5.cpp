#include "task5.h"
#include <iostream>

int main()
{
    char *buf="LKJHGFGH,LKJHGFGHJ,LKJHGFDRFGHJK,LKJHGFHJ,JHGFD,OIUYTFD,OIUYTF";
    int N=0;
    char **result=nullptr;
    split(&result, &N, buf, ',');
    std::cout << result[0]<<"\n"<<result[1]<<"\n"<<result[2]<<"\n"<<N<<"\n";
	return 0;
}