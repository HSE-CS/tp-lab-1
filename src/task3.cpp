#include <valarray>
#include <vector>
#include <numeric>
#include "task3.h"


//#include "task2.h"
//unsigned long long sumPrime(unsigned int hbound){
//    unsigned long long sum = 0;
//    for (unsigned int num = 2; num < hbound; ++num) {
//        if (checkPrime(num)){
//            sum += num;
//        }
//    }
//    return sum;
//}


unsigned long long sumPrime(unsigned int hbound) {  // faster then the 1st realization
    unsigned int n = hbound;
    std::vector<unsigned long long> prime(n+1);
    std::iota(prime.begin(), prime.end(), 0);

    prime[0] = prime[1] = false;
    for (auto i = 2; i < n; ++i)
        if (prime[i])
            if (i * 1ll * i <= n)
                for (auto j = i * i; j <= n; j += i)
                    prime[j] = false;

    auto sum = std::accumulate(prime.begin(), prime.end(),
                                   decltype(prime)::value_type(0));
    return sum;
}