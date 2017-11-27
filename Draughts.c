#include "header.h"

void main(){
	int Board[8][8];
	bool turn;
	
	//initialize start
	for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            Board[i][j] = -1;

    for (int i = 0; i < 2; i++)
        for (int j = 1 - i % 2; j < 8; j += 2)
            Board[i][j] = 0;

    for (int i = 6; i < 8; i++)
        for (int j = 1 - i % 2; j < 8; j += 2)
            Board[i][j] = 1;
            
    turn = 0;
	//initialize end
	printBoard(Board);
	
	int winner;
	while((winner = checkWin(Board, turn)) == -1){
		int path[4][2];
		scanf("%d %d",&path[0][0],&path[0][1]);
		int no_moves;
		scanf("%d",&no_moves);
		for(int i = 1; i <= no_moves; i++)
			scanf("%d %d",&path[i][0], &path[i][1]);
		
		if(isValid(Board, no_moves, path, turn)){
			makeMove(Board, no_moves, path);
			turn = !turn;
		}
		else
			puts("u loved me and I froze in time");
		printBoard(Board);
	}

	if(winner == 1)
		puts("you won babe");
	else
		puts("ur baby won");
}
