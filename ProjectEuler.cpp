#include "ProjectEuler.h"
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "ChallengeFive.h"
#include "ChallengeSix.h"
#include "ChallengeSeven.h"

void ChallengeSelect(int challengeType) {
    switch (challengeType) {
        case 1: {
            // start challenge one
            break;
        } case 2: {
            // start challenge two
            break;
        } case 3: {
            // start challenge three
            break;
        } case 4: {
            // start challenge four
            break;
        } case 5: {
            int num;
            std::cout << "Please enter the number: ";
            std::cin >> num;
            std::cout << std::endl;
            // Start the clock after user input
            unsigned long startTime = clock();
            ChallengeFive cf(num);
            cf.run();
            float total_time = static_cast<float>(clock() - startTime) / 1000;
            std::cout << "Calculation Took: " << total_time << " second(s)" << std::endl;
            break;
        } case 6: {
            int num;
            std::cout << "Please enter the number: ";
            std::cin >> num;
            std::cout << std::endl;
            // Start the clock after user input
            unsigned long startTime = clock();
            ChallengeSix cs(num);
            cs.run();
            float total_time = static_cast<float>(clock() - startTime) / 1000;
            std::cout << "Calculation Took: " << total_time << " second(s)" << std::endl;
            break;
        } case 7: {
            int num;
            std::cout << "Please enter the number: ";
            std::cin >> num;
            std::cout << std::endl;
            // Start the clock after user input
            unsigned long startTime = clock();
            ChallengeSeven cs(num);
            cs.run();
            float total_time = static_cast<float>(clock() - startTime) / 1000;
            std::cout << "Calculation Took: " << total_time << " second(s)" << std::endl;
            break;
        } default: {
            std::cout << "Challenge does not yet exist." << std::endl;
            break;
        }

    }
}

int main() {
    std::cout << "Welcome to the Project Euler Solver!" << std::endl;
    std::cout << "To solve a problem please insert the challenge number (1-6)." << std::endl;
    std::cout << "Challenge Number: ";

    int challengeNumber;
    std::cin >> challengeNumber;

    ChallengeSelect(challengeNumber);

    system("PAUSE");

    return 0;
}
