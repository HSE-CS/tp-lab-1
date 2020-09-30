#include "task2.h"
bool checkPrime(unsigned int value)
{
  bool flag = true;
  for(int i = 2; i * i <= value; i++)
  {
    if (value % i == 0)
      flag = false;
  }
  return flag;
}

unsigned long long nPrime(unsigned n)
{
  unsigned long long k = 0;
	unsigned long long i = 1;
	bool flag = true;
	while (k != n)
  {
    flag = true;
		i++;
		for (unsigned long long j = 2; j * j <= i; j++)
		  if (i % j == 0)
			{
        flag = false;
				break;
			}

    if (flag == true)
    {
      k++;
    }
	}
  return i;
}

unsigned long long nextPrime(unsigned long long value)
{
  value++;
  while (!checkPrime(value))
    value++;
  return value;
}
