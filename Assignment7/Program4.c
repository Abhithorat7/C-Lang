/*
 take no. from user
 a B c D
 b C d E
 c D e F
 d E f G
*/
#include<stdio.h>
void main(){
	int rows,ch;
	printf("Enter rows : ");
	scanf("%d",&rows);
	for(int i=0 ; i<rows ; i++){
		ch=65+i;
		for(int j=0 ; j<rows ; j++){
			if(j%2==0){
				printf(" %c ",ch+32);
			}
			else{
				printf(" %c ",ch);
			}
			ch++;
		}
		printf("\n");
	}
}
