#include <math.h>

bool checkPrime(unsigned int value){
    for(long i=2;i<=sqrt(value);i++)
        if(value%i==0)
            return false;
    return true;
}


unsigned long long nPrime(unsigned n){
    unsigned long long num = 1;
    int cnt = 0;
    while(cnt < n)
    {
        num++;
        if (checkPrime(num))
            cnt++;
    }
    return num;
}


unsigned long long nextPrime(unsigned long long value){
  if (checkPrime(value+1)) return value+1;
  else nextPrime(value+1);
}