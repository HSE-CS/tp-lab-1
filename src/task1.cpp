#include <iostream>

long nod(long m, long n)
{
    while(m && n) if (m < n) n %= m; else m %= n;
    return (m == 0L) ? n : m;
}

long nok(long m, long n)
{
    return (m/nod(m,n))*n;
}

unsigned long findValue(unsigned int min,unsigned max){
    long answ = 1;
    for(int i = 2; i <= 20; ++i)
    {
        answ = nok(answ,i);
    }
    return answ;
}


