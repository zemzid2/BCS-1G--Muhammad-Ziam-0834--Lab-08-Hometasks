#include<stdio.h>
int main(){
	int rows=5;
	
	int num=1;
	for(int i=0;i<rows;i++){
		
		for (int space=0; space<(rows-1-i);space++)
		{
			printf(" ");
		}
		for(int j=0;j<num;j++)
		{
			printf("*");
		}
		for (int space=0; space<(rows-1-i);space++)
		{
			printf(" ");
		}
		
		printf(" | ");
		
		
		for (int space=0; space<(rows-1-i);space++)
		{
			printf(" ");
		}
		for(int j=0;j<num;j++)
		{
			printf("%d", j+1);
		}
		for (int space=0; space<(rows-1-i);space++)
		{
			printf(" ");
		}
		
		printf(" | ");
		
		for (int space=0; space<(rows-1-i);space++)
		{
			printf(" ");
		}
		for(int j=0;j<num;j++)
		{
			printf("%c",'A'+j);
		}
		for (int space=0; space<(rows-1-i);space++)
		{
			printf(" ");
		}
		
		
		printf("\n");
		num+=2;
	}
	return 0;
}