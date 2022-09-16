/*
 take no. from user
 18 16 14
 12 10 8
 6  4  2
 */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows : ");
	scanf("%d",&rows);
	int num=rows*rows*2;
	for(int i=0 ; i<rows ; i++){
		for(int j=0 ; j<rows ; j++){
			printf("%d\t",num);
			num-=2;
		}
		printf("\n");
	}
}

