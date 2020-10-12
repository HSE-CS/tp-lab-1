
void swap(unsigned long *a, unsigned long *b) {
    unsigned long tmp = *a;
    *a = *b;
    *b = tmp;
}

unsigned long findNOK(unsigned long a, unsigned long b) {
    if (a < b) {
        swap(&a, &b);
    }

    while (b) {
        a%=b;
        swap(&a, &b);
    }

    return a;
}

unsigned long findNOD(unsigned long a, unsigned long b) {
    return a / findNOK(a, b) * b;
}

unsigned long findValue(unsigned int min, unsigned max) {
    unsigned long value = min;

    for (unsigned int i = min + 1; i < max; i++) {
        value = findNOD(value, i);
    }
    return value;
}
