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
    unsigned long long i = 0;
    unsigned long long j = 0;
    unsigned long long left = value - 1;
    unsigned long long right = value + 1;

    while (!checkPrime(left)){
        left -=1;
        i++;
    }
    while (!checkPrime(right)){
        right +=1;
        j++;
    }

    if (i < j)
        return left;
    else
        return right;
}