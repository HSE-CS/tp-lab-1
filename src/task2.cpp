#include "task2.h"

using namespace std;

bool checkPrime(unsigned int value) {

	vector <unsigned int> prime_numbers;
	vector <unsigned int> sequence(value + 1);

	for (auto i = 0; i < value + 1; i++){
		sequence[i] = i;
	}

	sequence[1] = 0;

	auto i = 2;

	while (i <= value) {
		if (sequence[i] != 0) {
			prime_numbers.push_back(sequence[i]);

			for (auto j = i; j < value + 1; j += i) {
				sequence[j] = 0;
			}
		}

		i += 1;
	}

	for (auto elem : prime_numbers) {
		if (elem == value) {

			return true;
		}
	}

	return false;
}

unsigned long long nPrime(unsigned int n) {

	auto position = 0;
	unsigned int number = 1;
	unsigned long long result = 1;
	
	while (position != n){
		
		number++;
		result++;

		if (checkPrime(number)) {
			position++;
		}
	}

	return result;
}

unsigned long long nextPrime(unsigned long long value) {
	
	auto number = value;

	while (true){
		
		number++;

		if (checkPrime(number)) {
			return number;
		}
	}
}