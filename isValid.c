#include<stdbool.h>
#include<stdlib.h>
#include<stdio.h>
bool isValid(int Board[][8], int no_moves, int path[][2], bool turn){
	for(int i = 0; i <= no_moves; i++){
		if(path[i][0] >= 8 || path[i][0] < 0)
			return 0;
		if(path[i][1] >= 8 || path[i][1] < 0)
			return 0;
	}	
		
	if(Board[path[0][0]][path[0][1]] != turn )
		return 0;
	int currx = path[0][0], curry = path[0][1], next = 1;
	for(int i = 0;i < no_moves;i++){		
		if(abs(currx-path[next][0]) - abs(curry-path[next][1]) != 0)
			return 0;
		if(Board[path[next][0]][path[next][1]] != -1 )
			return 0;
		if(abs(currx-path[next][0]) == 1){
			if(no_moves != 1)
				return 0;
			return 1;
		}
		if(abs(currx-path[next][0]) == 2){
			if(Board[(path[next][0]+currx)/2][(path[next][1]+curry)/2] != !turn )
				return 0;
			currx=path[next][0];
			curry=path[next++][1];
		}
		else{ 
			return 0;
		}
	}
	if(!turn){
		if(currx+2<8 && curry+2<8)
			if(Board[currx+2][curry+2] == -1 && Board[currx+1][curry+1] == !turn)
				return 0;
	    if(currx+2<8 && curry-2<8)
	    	if(Board[currx+2][curry-2] == -1 && Board[currx+1][curry-1] == !turn)
				return 0;
	}
	else{
		if(currx-2<8 && curry+2<8)
			if(Board[currx-2][curry+2] == -1 && Board[currx-1][curry+1] == !turn)
				return 0;
		if(currx-2<8 && curry-2<8)
			if(Board[currx-2][curry-2] == -1 && Board[currx-1][curry-1] == !turn)
				return 0;
	}
	return 1;

}
