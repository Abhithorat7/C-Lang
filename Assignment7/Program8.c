/*
 take no. from user
 16 15 14 13
 L  K  J  I
 8  7  6  5
 D  C  B  A
*/

#include<stdio.h>
void main(){
	int rows,temp;
	printf("Enter rows : ");
	scanf("%d",&rows);
	temp=rows*rows;
	for(int i=0 ; i<rows ; i++){
		for(int j=0 ; j<rows ; j++){
			if(i%2==0){
				printf(" %d ",temp);
			}
			else{
				printf(" %c ",64+temp);
			}
			temp--;
		}
		printf("\n");
	}
}
