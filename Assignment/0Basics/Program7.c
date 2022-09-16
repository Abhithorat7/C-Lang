/* WAP take a number and print wheather it is less than 10 or greater than 10,take all the values from the user */

#include<stdio.h>
void main(){
	int x=10;
	int num;

	printf("Enter number : ");
	scanf("%d",&num);

	if(num>x){
		printf("%d is Greater than 10\n",num);
	}
	else if(num==x){
		printf("%d is equal to 10\n",num);
	}else{
		printf("%d is less than 10\n",num);
	}
}
