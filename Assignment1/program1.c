
/*WAP to check wheather the input is a leap year or not(basic leap year) */

#include<stdio.h>
void main(){
	int year;
	printf("Enter the year you want to check : ");
	scanf("%d",&year);
	if(year%4==0 && year%400==0){
		printf("Leap year\n");
	}
	else{
		printf("Not a leap year\n");
	}
}
