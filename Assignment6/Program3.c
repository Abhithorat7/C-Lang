/*
 take a no. from user
 4 4 4 4 
 3 3 3 3
 2 2 2 2 
 1 1 1 1

*/

#include<stdio.h>
void main(){
	int rows,num;
	printf("Enter no. of rows : ");
	scanf("%d",&rows);

	for(int i=0 ; i<rows ; i++){
		num=rows-i;
		for (int j=1 ; j<=rows ; j++){
			printf("%d\t",num);
		}
		printf("\n");
	}
}


