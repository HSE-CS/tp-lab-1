bool checkPrime(unsigned int value) {
    if (value <= 1)
        return false;

    if (value == 2)
        return true;

    for (unsigned int i = 2; i < value; i++)
        if (value % i == 0)
            return false;
    return true;
}

unsigned long long nPrime(unsigned n){
    unsigned int j = 0;
    unsigned int i = 0;

    while (j != n)
    {
        i++;
        if (checkPrime(i))
            ++j;
    }
    return i;
}

unsigned long long nextPrime(unsigned long long value){
     while(true){
         if (checkPrime(value))
             return value;
         value++;
     }
}