//
// Created by toliman on 05.10.2020.
//

#include "task1.h"

#define ul unsigned long

using namespace std;

ul max_value = (long) pow(2, 31) - 1l;


vector<ul> find_all_primes_between_edges(ul min, ul max) {
    vector<ul> primes;
    for (ul number = (min > 2 ? min : 2); number <= max; ++number) {
        bool prime = true;
        for (ul divider = 2; divider * divider <= number; ++divider) {
            if (!(number % divider)) {
                prime = false;
                break;
            }
        }
        if (prime) primes.push_back(number);
    }
    return primes;
}

unsigned long findValue(unsigned int min, unsigned max) {

    assert(min <= max);
    assert(max <= max_value);

    ul candidate = 1;
    ul step;
    vector<ul> primes = find_all_primes_between_edges(min, max);
    for (auto &x : primes) candidate *= x;
    step = candidate;
    ul must_divided_by = max - min + 1;

    while (candidate + step < max_value) {
        ul dividers_counter = 0;
        for (ul divider = min; divider <= max; ++divider) {
            if (!(candidate % divider)) dividers_counter++;
        }
        if (dividers_counter == must_divided_by) break;
        candidate += step;
    }
    return candidate;
}
