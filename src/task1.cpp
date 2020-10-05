//
// Created by jmax on 05.10.2020.
//

unsigned long findValue(unsigned int min, unsigned max) {
    unsigned long int num = max - 1;
    bool isAnswer;
    do {
        num++;
        isAnswer = true;
        for (unsigned int i = min; i <= max; i++) {
            if (num % i != 0) {
                isAnswer = false;
                break;
            }
        }
    } while (!isAnswer);
    return num;
}
