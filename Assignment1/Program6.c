 
/* WAP to get 10 numbers from users and find their sum and average */

#include<stdio.h>
void main(){
	int num,sum=0;
	int avg;
	for(int i=1 ; i<=10 ; i++){
		printf("Enter number %d : ",i);
		scanf("%d",&num);
		sum+=i;
	}
	printf("Total sum is : %d\n",sum);
	avg=sum/10;
	printf("Average is : %d\n",avg);
}


