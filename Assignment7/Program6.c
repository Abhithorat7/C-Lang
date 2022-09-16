/* 
 take no. from user

 = = = = = =
 $ $ $ $ $ $ 
 @ @ @ @ @ @
 = = = = = =
 $ $ $ $ $ $ 
 @ @ @ @ @ @
*/

#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows : ");
	scanf("%d",&rows);
	for(int i=0; i<rows ; i++){
		for(int j=0 ; j<rows ; j++){
			if(i%3==0){
				printf(" = ");
			}
			else if(i%3==1){
				printf(" $ ");
			}
			else{
				printf(" @ ");
			}
		}
		printf("\n");
	}
}
