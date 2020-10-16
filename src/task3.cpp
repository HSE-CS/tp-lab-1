#include "task3.h"
#include "task2.h"

unsigned long long sumPrime(unsigned int hbound)
{
  unsigned long long cnt = 2;
  cnt = nextPrime(cnt);
  unsigned long long sum = 2;
  while(cnt < hbound)
  {
    sum += cnt;
    cnt = nextPrime(cnt);
  }
  return sum;
}
