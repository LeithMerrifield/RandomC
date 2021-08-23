#include "functions.hpp"

void cheese() {
    std::cout << "Cheese";
}

void DrawMap(char (&map)[3][3]) {
    printf("\033c");
    std::cout << "             ||             ||              \n"; 
    std::cout << "      " << map[0][0] << "      ||      " << map[0][1] << "      ||      " << map[0][2] << "      \n"; 
    std::cout << "             ||             ||              \n"; 
    std::cout << "============================================\n"; 
    std::cout << "             ||             ||              \n"; 
    std::cout << "      " << map[1][0] << "      ||      " << map[1][1] << "      ||      " << map[1][2] << "      \n"; 
    std::cout << "             ||             ||              \n"; 
    std::cout << "============================================\n"; 
    std::cout << "             ||             ||              \n"; 
    std::cout << "      " << map[2][0] << "      ||      " << map[2][1] << "      ||      " << map[2][2] << "      \n"; 
    std::cout << "             ||             ||              \n"; 

}

void CheckWin(bool* players, char (&map)[3][3]) {

    if(map[0][0] == 'x' && map[1][0] == 'x' && map[2][0] == 'x') {
        players[0] = true;
    }
    else if(map[0][0] == 'o' && map[1][0] == 'o' && map[2][0] == 'o') { 
        players[1] = true;
    }

    if(map[0][1] == 'x' && map[1][1] == 'x' && map[2][1] == 'x') {
        players[0] = true;
    }
    else if(map[0][1] == 'o' && map[1][1] == 'o' && map[2][1] == 'o') { 
        players[1] = true;
    }

    if(map[0][2] == 'x' && map[1][2] == 'x' && map[2][2] == 'x') {
        players[0] = true;
    }
    else if(map[0][2] == 'o' && map[1][2] == 'o' && map[2][2] == 'o') { 
        players[1] = true;
    }

    if(map[0][0] == 'x' && map[0][1] == 'x' && map[0][2] == 'x') {
        players[0] = true;
    }
    else if(map[0][0] == 'o' && map[0][1] == 'o' && map[0][2] == 'o') { 
        players[1] = true;
    }

    if(map[1][0] == 'x' && map[1][1] == 'x' && map[1][2] == 'x') {
        players[0] = true;
    }
    else if(map[1][0] == 'o' && map[1][1] == 'o' && map[1][2] == 'o') { 
        players[1] = true;
    }

    if(map[2][0] == 'x' && map[2][1] == 'x' && map[2][2] == 'x') {
        players[0] = true;
    }
    else if(map[2][0] == 'o' && map[2][1] == 'o' && map[2][2] == 'o') { 
        players[1] = true;
    }

    if(map[0][0] == 'x' && map[1][1] == 'x' && map[2][2] == 'x') {
        players[0] = true;
    }
    else if(map[0][0] == 'o' && map[1][1] == 'o' && map[2][2] == 'o') { 
        players[1] = true;
    }

    if(map[0][2] == 'x' && map[1][1] == 'x' && map[2][0] == 'x') {
        players[0] = true;
    }
    else if(map[0][2] == 'o' && map[1][1] == 'o' && map[2][0] == 'o') { 
        players[1] = true;
    }
}

void TakeTurn(bool currentPlayer, char (&map)[3][3]) {
    char placement;
    if(!currentPlayer) {
        std::cout << "Player X's Turn: ";
    }
    else {
        std::cout << "Player O's Turn: ";
    }

    std::cin >> placement;
    std::cout << "\n";

    for(int i = 0; i < 3; i++) {
        for(int x = 0; x < 3; x++) {
            if(placement == map[i][x]) {
                currentPlayer ? map[i][x] = 'o' : map[i][x] = 'x';
                return;
            }
        }
    }
    TakeTurn(currentPlayer,map);
    return;
}