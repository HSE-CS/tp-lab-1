bool checkPrime(unsigned int value) {
    for (int j = 2; j * j <= value; j++)
    {
        if (value % j == 0)
            return false;
    }
    return true;
}
unsigned long long sumPrime(unsigned int hbound) {
    int long long a = 0;
    for (int i = 0; i< hbound; i++) {
        if (checkPrime(i))
            a = a + i;
    }
    return a;
}