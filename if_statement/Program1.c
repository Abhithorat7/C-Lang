
#include<stdio.h>
void main(){

	float income;
	float temp;
	printf("Enter your income : ");
	scanf("%f",&income);
	printf("Your income is \n",income);

	if(income>=0 && income<=500000){

		temp=income*0.5;

		printf("Your tax amount is \n",temp);
	}
}
