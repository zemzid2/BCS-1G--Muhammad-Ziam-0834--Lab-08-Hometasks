#include<stdio.h>
int main(){
	int classes[3][4] = {{85,92,78,90},{88,76,95,84},{90,85,88,92}};
	float avg;
	int total = 0;
	for(int i=0;i<3; i++){
		for(int j=0;j<4;j++)
		{
			total = total + classes[i][j];
		}
		avg = (float)total/4;
		printf("The average for class %d is %.2f",i+1,avg);
		printf("\n");
		
		total=0;
	}
	return 0;
}