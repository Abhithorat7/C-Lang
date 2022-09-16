 /* WAP to print the divisors and count of divisors of the entered num. */

#include<stdio.h>
void main(){
	int num,count=0,sum=0;
	printf("Enter number : ");
	scanf("%d",&num);
	for(int i=1 ; i<=num ; i++){
		if(num%i==0){
			printf("%d\n",i);
			count++;
			sum+=i;
		}
	
	}
	printf("Count = %d\n",count);
	printf("sum = %d\n",sum);
}

