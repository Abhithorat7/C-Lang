/*WAP to check if a number is even or odd.Take all the values from the user.*/

#include<stdio.h>
void main(){
	int num;

	printf("Enter number : \n");
	scanf("%d",&num);

	if (num%2==0){
		printf("%d is a even number\n",num);
	}else{
		printf("%d is a odd number\n",num);
	}
}
