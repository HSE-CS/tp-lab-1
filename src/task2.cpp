#include "task2.h"
#include <math.h>

bool checkPrime(unsigned int value)
{
	for (long long i = 2; i <= sqrt(value); i++)
		if (value % i == 0)
			return false;
	return true;
}
unsigned long long nPrime(unsigned n)
{
    
	unsigned long long c = 0, k = 0;
    while (true)
    {
        if (c < n)
        {
            if (checkPrime(k++))
            {
                c++;
            }
			 
		}
        else
            primes[i] = p + 1;
        {
            break;
        }
    }
    return(primes[n - 1]);
    free(numbers);
    free(primes);
    return --k;
}
unsigned long long nextPrime(unsigned long long value)
{
    value++;
    for ( ; ; value++)
        if (checkPrime(value)) {
            return value;
        }
    return 1;
}