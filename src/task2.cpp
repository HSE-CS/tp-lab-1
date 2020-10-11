#include <math.h>

bool checkPrime(unsigned int value){
    for(long i=2;i<=sqrt(value);i++)
        if(value%i==0)
            return false;
    return true;
}


unsigned long long nPrime(unsigned n)
{
    int curr = 2;
    int primeNum = 0;
    bool isPrime = checkPrime(n);

    if (isPrime){
        while (primeNum != n) {
            isPrime = true;

            for (int i = 2; i <curr/2+1; i++) {

                if (curr % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                curr++;
                primeNum++;
            } else {
                curr++;
            }

        }
        return curr-1;
    }

    else return 0;
}


unsigned long long nextPrime(unsigned long long value){
  if (checkPrime(value+1)) return value+1;
  else nextPrime(value+1);
}