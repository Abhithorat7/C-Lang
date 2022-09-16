/*WAP to print count of divisors of the entered number */

#include<stdio.h>
void main(){
	int num , count=0;
	printf("Enter number : ");
	scanf("%d",&num);
	for(int i=1 ; i<=num ; i++){
		if(num%i==0){
			count++;
		}
	}
	printf("%d\n",count);
}
