/*
 take input from user
 0   1   1   2
 3   5   8   13
 21  34  55  89
 144 233 377 610
 */
#include<stdio.h>
void main(){
	int rows,a=0,b=0,c=1;
	printf("Enter rows : ");
	scanf("%d",&rows);
	for(int i=0 ; i<rows ; i++){
		for(int j=0 ; j<rows ; j++){
			printf("%d\t",b);
			a=c;
			c=b;
			b=a+c;

		}
		printf("\n");
	}
}
