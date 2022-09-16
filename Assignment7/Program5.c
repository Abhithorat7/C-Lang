/*
 take the no. of rows from the user
 1   4  3
 16  5  36
 7  64  9
 */

#include<stdio.h>
void main(){
	int rows,num=1;
	printf("Enter no. of rows : ");
	scanf("%d",&rows);
	for(int i=1 ; i<=rows ; i++){
		for(int j=1 ; j<=rows ; j++){
	              		if(i%2!=0){
					if(j%2!=0){
						printf(" %d ",num);
					}
					else{
						printf(" %d ",num*num);
					}
					num++;
				}
				else{
					if(j%2!=0){
						printf(" %d ",num*num);
					}
					else{
						printf(" %d ",num);
					}
					num++;
				}
		}
		printf("\n");

	}
}
 
