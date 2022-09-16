/*
 take the no. of rows from the user
 1  4   27
 4  27  16
 27 16  125
*/
#include<stdio.h>
void main(){
	int rows;
	printf("Enter number of rows : ");
	scanf("%d",&rows);
	for(int i=0 ; i<rows ; i++){
		int num=1+i;
		for(int j=0 ; j<rows ; j++){
			if(i%2!=0){
				if(j%2!=0){
				printf("%d\t",num*num*num);
				}
				else{
					printf("%d\t",num*num);
				}
			}
			else{
				if(j%2!=0){
					printf("%d\t",num*num);
				}
				else{
					printf("%d\t",num*num*num);
				}
			}
			num++;
		}
		printf("\n");
	}
}
