#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool isValid(int Board[][8],int no_moves,int path[][2],bool turn);
int checkWin(int Board[][8],bool turn);//-1=nowin,0\1=player0/1 win
void makeMove(int Board[][8],int no_moves,int path[][2]);
void printBoard(int Board[][8]);
