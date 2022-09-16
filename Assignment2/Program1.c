

/*WAP to find the sum of numbers that are not divisible by 3 up to a given number */

#include<stdio.h>
void main(){
	int num,sum=0;
	printf("Enter number : ");
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		if(i%3!=0){
			sum+=i;
		}
	}
	printf("Total sum is : %d\n",sum);
}

