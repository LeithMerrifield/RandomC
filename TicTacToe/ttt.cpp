#include "functions.hpp"

int main() {
    // False X     True 0
    bool currentPlayer = false;
    bool xWon = false;
    bool oWon = false;
    char map[3][3] = {{'1','2','3'},
                      {'4','5','6'},
                      {'7','8','9'}};

    cheese();
    int loopLimit = 10;

    while(loopLimit >= 0 || xWon || oWon) {
        //std::cout << loopLimit << std::endl;
        loopLimit--;
    }
}

