/*Write a program to print value and size of the below variables.Take all the values from the user */

#include<stdio.h>
void main(){
	int num;
	char chr;
	float rs;
	double crMoney;
	printf("Enter the integer number : \n");
	scanf("%d",&num);
	printf("Enter the char : \n");
	scanf(" %c",&chr);
	printf("Enter the float number : \n");
	scanf("%f",&rs);
	printf("Enter the long number : \n");
	scanf("%lf",&crMoney);

	printf("Entered integer number is : %d\n",num);
	printf("Entered character is : %c\n", chr);
	printf("Entered float number is : %f\n",rs);
	printf("Entered long number is : %lf\n",crMoney);
}
