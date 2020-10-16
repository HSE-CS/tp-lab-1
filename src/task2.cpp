bool checkPrime(unsigned int value) {
    for (int j = 2; j * j <= value; j++)
    {
        if (value % j == 0)
            return false;
        return true;
    }
}
unsigned long long nPrime(unsigned n) {
    int long a = 0;
    int long b = 0;
    while(a != n) {
        a++;
        if (checkPrime(a)) {
            b++;
        }
    }
    return a;
}
unsigned long long nextPrime(unsigned long long value) {
    if (checkPrime(value)) {
        value++;
    }
    while (!checkPrime(value)) {
        value++;
    }
    return value;

}
