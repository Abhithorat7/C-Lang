
/*
 take no of rows from the user

 3 2 1 
 c b a
 3 2 1
 c b a

*/

#include<stdio.h>
void main(){
	int rows,cols,num1;
	char num;
	printf("Enter no. of rows : ");
	scanf("%d",&rows);

	for(int i=0 ; i<rows ; i++){
		num=96+rows;
		for(int j=rows ; j>=1 ; j--){
			if(i%2==0){
				printf("%d\t",j);
			}
			else{
				printf("%c\t",num);
				num--;
			}
		}
		printf("\n");
	}
}
