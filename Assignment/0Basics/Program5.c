/* WAP to take numerical input from the user and find whether the number is divisible by 5 and 11,take all the values from the user */

#include<stdio.h>
void main(){
	int num;
	printf("Enter number : ");
	scanf("%d",&num);

	if(num%5==0 && num%11==0){
		printf("%d is divisible by 5 and 11\n",num);
	}else{
		printf("%d is not divisible by 5 and 11\n",num);
	}
}
