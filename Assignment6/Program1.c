/*
 take no. from user
 4 3 2 1
 5 4 3 2
 6 5 4 3
 7 6 5 4

 */

#include<stdio.h>
void main(){
	int rows,num,cols;
	printf("Enter number of rows : ");
	scanf("%d",&rows);
	printf("Enter number of cols: ");
	scanf("%d",&cols);

	for(int i=0 ; i<rows ;i++){
		num=rows+i;
		for(int j=1 ; j<=cols ; j++){
			printf("%d ",num);
			num--;
		}
		printf("\n");
	}
}
