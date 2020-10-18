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
    
    int size = n;
    unsigned long long* primes = (int*)malloc(n * sizeof(int));
    int* numbers = (int*)malloc(size * sizeof(int));
   

    for (int i = 0; i < size; i++)
        numbers[i] = i; 

    primes[0] = 2; 
    int i = 0; 

    while (i < n) {
        int p = primes[i++]; 

        for (int j = p * 2; j < size; j += p)
            numbers[j] = 0; 

        while (numbers[p + 1] == 0)
            p++; 

        if (p + 1 >= size) { 
        
            int* tmp = (int*)malloc(size * 2 * sizeof(int));
            for (int k = 0; k < size; k++)
                tmp[k] = numbers[k];

            free(numbers);

            size *= 2;
            numbers = tmp;

            for (int j = size / 2; j < size; j++)
                numbers[j] = j; 

            i = 0; 
        }
        else
            primes[i] = p + 1; 
    }
    return(primes[n - 1]);
    

    free(numbers);
    free(primes);
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