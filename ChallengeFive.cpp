// Project Euler Challenge Five
#include "ChallengeFive.h"
#include <iostream>

ChallengeFive::ChallengeFive(int number) {
    ///TODO: Allow input of a variable argument
    this->factorable = number;
}

ChallengeFive::~ChallengeFive() {
    ///TODO: Delete Local Variables to conserve memory
    delete &this->factorable;
}

int primesBefore(int n) {
    int total = 0;

    for (int i = 2; i <= n; i++) {
        BasicFunctions bf(i);
        if (bf.length == 1) total++;
    }

    return total;
}

// Do a pass by reference so variables are directly modified (it's also faster)
void compare_factors(int *a, int b) {
    // Generate the list of primes < a and < b
    int gcd = 0;

    // YAY!!! COMMA OPERATOR!!!
    for (int i = 1; i < (*a > b ? *a : b); i++) {
        if (*a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    // A or B is prime
    if (gcd == 0) {
        *a *= b;
    } else {
        *a = (*a * b) / gcd;
    }
}

void ChallengeFive::run() {
    int product = 1;

    // Start Prime Factorization At Two
    for (int i = 1; i < this->factorable; i++) {
        compare_factors(&product, i);
    }

    std::cout << std::endl << "Product: " << product << std::endl;
}
