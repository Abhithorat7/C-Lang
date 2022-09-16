
/*Take an input number from the user and print the sum of digits */

#include<stdio.h>
void main(){
	int num,sum=0,temp=0;
	printf("Enter number : ");
	scanf("%d",&num);
	while(num!=0){
		temp=num%10;
		sum=sum+temp;
		num=num/10;
	}
	printf("Sum of digits %d\n",sum);

}

