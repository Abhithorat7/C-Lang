
/* WAP to take a number from user and count number of digit */

#include<stdio.h>
void main(){
	int num,count=0;
	printf("Enter number : ");
	scanf("%d",&num);
	int x=num;
	while(num!=0){
	//	count++;
		num=num/10;
		count++;
	}
	printf("Number of digits in %d is %d\n",x,count);
}
