#include<stdio.h>
int main(){
	
	int rows=5;
	for(int i=0; i<rows; i++){
		
		for(int space = 0; space< (rows-1-i); space++){
			printf(" ");
		}
		for(int j=0; j<=i; j++){
			printf("*");
		}
		
		printf("|\t");
		for(int space = 0; space< (rows-1-i); space++){
		printf(" ");
		}
		for(int j=0; j<=i; j++){
		printf("%d", i+1);
		}
		
		printf("|\t");
		
		for(int space = 0; space< (rows-1-i); space++){
			printf(" ");
		}
		for(int j=0; j<=i; j++){
		printf("%c", 'A'+1);
		}
		
		printf("\n");
	}return 0;
}
