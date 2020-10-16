int gcd(int a, int b) {
	int t;
	while (b != 0) {
		t = b;
		b = a % b;
		a = t;
	}
	return a;
}
unsigned long findValue(unsigned int min, unsigned max) {
	int nok = 1;
	for (int i = min; i < max; i++) {
		//int nod = gcd(nok, i + 1);
		nok = (nok * i) / gcd(nok, i);
	}
	return nok;
}