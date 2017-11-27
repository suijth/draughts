#include "header.h"

void makeMove(int Board[][8],int no_moves,int path[][2]){
	for(int i=1; i<=no_moves && (path[i-1][0]+path[i][0])/2 != path[i-1][0]; i++){
		Board[(path[i-1][0]+path[i][0])/2][(path[i-1][1]+path[i][1])/2] = -1;
		printf("%d\n",Board[(path[i-1][0]+path[i][0])/2][(path[i-1][1]+path[i][1])/2]);
	}
	Board[path[no_moves][0]][path[no_moves][1]] = Board[path[0][0]][path[0][1]];
	Board[path[0][0]][path[0][1]] = -1;
}
