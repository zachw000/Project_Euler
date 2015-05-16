#include "ChallengeSix.h"

// null constructor
ChallengeSix::ChallengeSix(int number) { this->c_to = number; }
ChallengeSix::~ChallengeSix() {
    delete &this->c_to;
}

void ChallengeSix::run() {
    int sum_of_squares = 0;
    int sum_of_naturals = 0;
    for (int i = 1; i <= this->c_to; i++) {
        sum_of_squares += pow(i, 2);
        sum_of_naturals += i;
    }

    sum_of_naturals = pow(sum_of_naturals, 2);

    std::cout << "Answer is: " << (sum_of_naturals - sum_of_squares) << std::endl;
}
