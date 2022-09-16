
/*Take an input number from the user and print the product of digits */

#include<stdio.h>
void main(){
	int num,product=1,temp=0;
	printf("Enter number : ");
	scanf("%d",&num);
	while(num!=0){
		temp=num%10;
		product=product*temp;
		num=num/10;
	}
	printf("Product of digits %d\n",product);

}

