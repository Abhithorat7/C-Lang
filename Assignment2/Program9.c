
/* Take an input number from the user and print the number in reverse */

#include<stdio.h>
void main(){
	int num,rem=0;
	printf("Enter number : ");
	scanf("%d",&num);
	while(num!=0){
		rem=num%10;
		printf("%d",rem);
		num=num/10;
	}
	printf("\n");
}
