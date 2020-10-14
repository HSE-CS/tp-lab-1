unsigned long findValue(unsigned int min, unsigned max) {
	
	unsigned int _count = 0;

	for (unsigned int _value = 1; ; _value++) {
		for (int _del = min; _del <= max; _del++) {

			if (_del == 0) {
				break;
			}

			if (_value % _del == 0) {
				_count++;
			}
		}

		if (_count == max - min + 1) {
			return _value;
		}else {
			_count = 0;
		}

	}

}