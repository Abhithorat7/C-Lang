/*
 take no from user

 0  3  5
 15 24 35
 48 63 80
*/

#include<stdio.h>
void main(){
	int rows,num=1;
	printf("Enter no of rows : ");
	scanf("%d",&rows);
	for(int i=0 ; i<rows ; i++){
		for(int j=0 ; j<rows ; j++){
			printf("%d\t",num*num-1);
			num++;
		}
		printf("\n");
	}
}



