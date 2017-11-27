#include "header.h"

int checkWin(int Board[][8],bool turn){
    int direction;
    if(turn == 0)
        direction = 1;
    else
        direction = -1;
    
    for(int i = 0; i < 8; i++)
        for(int j = 0; j < 8; j++){
            if(Board[i][j] != turn || i == !turn * 7)
                continue;
            if((j - 1 > 0) && (Board[i + direction][j - 1] == -1))
                return -1;
            if((j + 1 < 8) && (Board[i + direction][j + 1] == -1))
                return -1;
            if(i + 2 * direction < 0 || i + 2 * direction >= 8)
                continue;
            if((j - 2 > 0) && (Board[i + direction][j - 1] == !turn) && (Board[i + 2*direction][j - 2] == -1))
                return -1;
            if((j + 2 < 8) && (Board[i + direction][j + 1] == !turn) && (Board[i + 2*direction][j + 2] == -1))
                return -1;
        }
        
    return !turn;
}

