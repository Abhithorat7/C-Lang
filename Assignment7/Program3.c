/*
 take no. from user
 4 a 3 b
 4 a 3 b
 4 a 3 b
 4 a 3 b
*/
#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows : ");
	scanf("%d",&rows);
	for(int i=0 ; i<rows ; i++){
		int num=rows,ch=97;
		for(int j=0 ; j<rows ; j++){
			if(j%2==0){
				printf(" %d ", num);
				num--;
			}
			else{
				printf(" %c ",ch);
				ch++;
			}
		}
		printf("\n");
	}
}
