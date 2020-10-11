//
// Created by kasya on 11.10.2020.
//

unsigned long gcd(unsigned long a, unsigned long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

unsigned long findValue(unsigned int min, unsigned max) {
    unsigned long ans = 1;
    for (unsigned i = min; i <= max; ++i) {
        if (ans % i != 0) {
            unsigned g = gcd(ans, i);
            ans *= (i / g);
        }
    }
    return ans;
}
