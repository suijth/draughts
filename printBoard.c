#include<stdio.h>

void printBoard(int Board[][8]){
	printf("|B|");
	for(int i=0;i<8;i++)
		printf("%d|",i);
	printf("\n");
	for(int j=0; j<19; j++)
			printf("-");
		printf("\n");
	for(int i=0; i<8; i++){
		printf("|%d|",i);
		for(int j=0; j<8; j++){
			if(Board[i][j] == 0)
				printf("%c|",'O');
			else if(Board[i][j] == 1)
				printf("%c|",'X');
			else
				printf("%c|",' ');
		}
		printf("\n");
		for(int j=0; j<19; j++)
			printf("-");
		printf("\n");
	}
}

