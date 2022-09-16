/*
 take no. from user
 I H G
 F E D 
 C B A

*/

#include<stdio.h>
void main(){
	int rows,cols,num;
	printf("Enter no of rows : ");
	scanf("%d",&rows);
	printf("Enter no of cols : ");
	scanf("%d",&cols);

	num=64+rows*cols;

	for(int i =1 ; i<=rows ; i++){
		for(int j=1 ; j<=cols ; j++){
			printf("%c ",num);
			num--;
		}
	printf("\n");
	}
}


