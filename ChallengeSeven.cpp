#include "ChallengeSeven.h"
ChallengeSeven::ChallengeSeven(int number) {
    this->gen_to = number;
}

ChallengeSeven::~ChallengeSeven() {
    delete &this->gen_to;
}

void ChallengeSeven::run() {
    int index = 0;
    int c_num = 2;

    int answer = 0;

    std::cout << "Generate to: " << this->gen_to << std::endl;

    while (index < this->gen_to) {
        BasicFunctions bf(c_num);
        index += (bf.length == 1) ? 1 : 0;
        answer = (bf.length == 1) ? bf.getOriginalNumber() : answer;
        c_num++;
    }

    std::cout << "Answer is: " << answer << std::endl;
}
