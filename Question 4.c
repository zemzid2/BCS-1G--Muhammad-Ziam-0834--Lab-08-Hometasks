#include<stdio.h>
int main(){
	int position[3][3] = {{1,0,1},{0,0,1},{1,1,0}};
	
	int countavail=0;
	
	for(int i=0; i<3;i++){
		for(int j=0;j<3;j++)
		{
			if(position[i][j]==0)
			{
				printf("Seat %d available in row %d\n", j+1, i+1);
				countavail++;
			}
		}
	}
	printf("Total %d seats available", countavail);
	return 0;
}