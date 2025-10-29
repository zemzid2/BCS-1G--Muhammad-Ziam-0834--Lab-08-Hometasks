#include<stdio.h>

int main(){
	int image[4][4]={
	{1, 0, 1, 0},
	{0, 1, 0, 1},
	{1, 1, 0, 0},
	{0, 0, 1, 1}
	};
	int i,j;
	
	int inverted[4][4];
	int whitecount=0;
	
	for(i=0;i<4;i++){
		for(j=0; j<4; j++){
			if(image[i][j]==1){
				whitecount++;
			}
			inverted[i][j] = 1 - image[i][j];
		}

	}
	printf("--Real image--");
	printf(" \t--Inverted image--\n");	
	for(i=0;i<4;i++){
		printf("\t");
		for(j=0;j<4;j++){
			printf("%d",image[i][j]);
		}
		printf("\t\t");
		for(j=0;j<4;j++){
			printf("%d",inverted[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<4;i++){
		
	}
	
	printf("Number of white pixels : %d", whitecount);
	
	return 0;
	
	
}