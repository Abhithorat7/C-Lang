
/*
take the no. from user
   D C B A
   e d c b
   F E D C
   g f e d
 
 */

#include<stdio.h>
void main(){
	int rows,num,num1;
	printf("Enter no. of rows : ");
	scanf("%d",&rows);

	for(int i=0 ; i<rows ; i++){
		num=64+rows+i;
		for(int j=1 ; j<=rows ; j++){
			if(i%2==0){
				printf("%c ",num);
			}
			else{
				printf("%c ",num+32);
			}
			num--;
		}
		printf("\n");
	}
}

