

#include "PrimeNumber.h"

PrimeNumber::PrimeNumber(int num) {
    PrimeNumber::number = num;
}

bool PrimeNumber::isPrime() {
    bool isPrime = true;
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            return false;
        } else {
            isPrime = true;
        }
    }
    return isPrime;
}