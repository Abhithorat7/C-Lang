
/* WAP to find prime or not */

#include<stdio.h>
void main(){
	int num , count=0;
	printf("Enter number : ");
	scanf("%d",&num);

	for(int i=2 ; i<=num ; i++){
		if(num%i==0){
			count++;
		}
	}
	if(count==1){
		printf("%d is a prime number\n",num);
	}
	else if(num==1){
		printf("%d is not even not prime\n",num);
	}
	else{
		printf("%d is not a prime number\n",num);
	}
}

