#include "task3.h"


using namespace std;
unsigned long long sumPrime(unsigned int hbound){

	vector <unsigned long long> prime_numbers;
	vector <unsigned long long> sequence(hbound);

	for (unsigned long long i = 0; i < hbound; i++){
		sequence[i] = i;
	}

	sequence[1] = 0;

	auto i = 2;

	while (i < hbound) {
		if (sequence[i] != 0) {
			prime_numbers.push_back(sequence[i]);

			for (auto j = i; j < hbound; j += i) {
				sequence[j] = 0;
			}
		}

		i += 1;
	}

	unsigned long long result = 0;
	for (auto elem : prime_numbers) {
			result += elem;
	}

	return result;
}