#include "functions.hpp"


int main() {
    // False X     True o
    bool currentPlayer = false;

    // [0] = x [1] = o
    bool players[2] = {false,false};

    char map[3][3] = {{'1','2','3'},
                      {'4','5','6'},
                      {'7','8','9'}};

    int loopLimit = 9;

    DrawMap(map);

    while(loopLimit > 0 && (!players[0] && !players[1])) {
        //std::cout << loopLimit << std::endl;
        TakeTurn(currentPlayer, map);
        currentPlayer = !currentPlayer;
        CheckWin(players,map);
        DrawMap(map);
        loopLimit--;
    }

    if(players[0]) {
        std::cout << "Player X Won\n";
    }
    else if(players[1]) {
        std::cout << "Player O Won\n";
    }
    else {
        std::cout << "The Game ended in a draw\n";
    }

    return 0;   
}

