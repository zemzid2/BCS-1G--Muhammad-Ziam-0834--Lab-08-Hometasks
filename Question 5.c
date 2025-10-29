#include<stdio.h>
int main(){
	int position[4][4]=
	{
	{12, 15, 10, 9},
	{11, 8, 12, 13},
	{14, 13, 9, 7},
	{16, 11, 10, 8},
	};




for(int i=0; i<4; i++){
	for(int j=0;j<4;j++){
		
		int isCold=1;
		
		int current = position[i][j];
		if(i>0 && position[i-1][j] <= current){ //top<current position
			isCold = 0;
		}
		if(i<3 && position[i+1][j] <= current){
			isCold = 0;
		}
		if(j>0 && position[i][j-1] <= current){
			isCold=0;
		}
		if(j<3 && position[i][j+1] <= current){
			isCold=0;
		}
		if(isCold){
			printf("At position (%d, %d) with tempertature %d degree C\n",i+1, j+1, current);
		}
	}
}return 0;
}

