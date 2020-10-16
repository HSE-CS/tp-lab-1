long nod(long a, long b) {

    while (a != b) {
        if (a > b) {
            long tmp = a;
            a = b;
            b = tmp;
        }
        b = b - a;
    }
    return a;
}
int unsigned long findValue(unsigned int min, unsigned max) {
    int long p = 1;
    for (int i = min; i < max + 1; i++) {
        p = i * p;
    }
    return p/nod(min,max);
}
