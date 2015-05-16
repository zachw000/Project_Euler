#include <math.h>
#include <cmath>
#include <iostream>
#include "challenges.h"

BasicFunctions::BasicFunctions(int n) {
    this->length = this->getFactorizationCount(n);
    this->factors = this->primeFactors(n);
    this->originalNumber = n;
}

BasicFunctions::~BasicFunctions() {
    delete &this->length;
    delete this->factors;
}

int BasicFunctions::getFactorizationCount(int n) {
    int array_cnt = 0;

    // Adds to all the 2's that divide into n
    while (n % 2 == 0) {
        array_cnt++;
        n /= 2;
    }

    for (int i = 3; i <= (sqrt(n)); i+= 2) {
        while (n % i == 0) {
            array_cnt++;
            n /= i;
        }
    }

    if (n > 2)
        array_cnt++;
    return array_cnt;
}

int * BasicFunctions::primeFactors(int n) {
    // Get the array size
    int array_size = getFactorizationCount(n);

    static int *factors;
    factors = new int[array_size];

    int array_index = 0;

    // Adds to all the 2's that divide into n
    while (n % 2 == 0) {
        factors[array_index] = 2;
        array_index++;
        n /= 2;
    }

    for (int i = 3; i <= (sqrt(n)); i+= 2) {
        while (n % i == 0) {
            factors[array_index] = i;
            array_index++;
            n /= i;
        }
    }

    if (n > 2) {
        factors[array_index] = n;
        array_index++;
    }

    return factors;
}

void BasicFunctions::printIntPointer(int *n, int length) {
    for (int i = 0; i <= length; i++) {
        std::cout << "Value: " << *(n + i) << std::endl;
    }
}

int BasicFunctions::getOriginalNumber() {
    return this->originalNumber;
}
