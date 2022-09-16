
/* Write a program to take a number as input and print whether that is a prime number or not */

#include<stdio.h>
void main(){
	int num,count=0;
	printf("Enter number : ");
	scanf("%d",&num);

	for(int i=1 ; i<=num ; i++){
		if(num%i==0){
			count++;
		}
	}
	if(count==2){
		printf("%d is a prime number\n",num);
	}
	else if(count==1){
		printf("%d is not prime not even\n",num);
	}
	else if(count==0){
		printf("%d is not prime not even\n",num);
	}
	else{
		printf("%d is not a prime number\n",num);
	}

}
