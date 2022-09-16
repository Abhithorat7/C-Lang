
/* Take a number from the user and print the fibonnacci series up to that number */

#include<stdio.h>
void main(){
	int num,num1=1,num2=1,num3=0;
	printf("Enter number : ");
	scanf("%d",&num);
	while(num3<num){
		printf("%d ",num3);
		num1=num2;
		num2=num3;
		num3=num1+num2;
	}
	printf("\n");
}
