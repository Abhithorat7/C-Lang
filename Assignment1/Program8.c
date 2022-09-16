/*WAP that takes angles of a triangle from user and print wheather that the triangle is valid or not */

#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter value 1 : ");
	scanf("%d",&a);
	printf("Enter value 2 : ");
	scanf("%d",&b);
	printf("Enter value 3 : ");
	scanf("%d",&c);
	if(a>0 && b>0 && c>0){
		if(a+b+c==180){
			printf("Triangle is valid\n");
		}
		else{	
			printf("Triangle is not valid\n");
		}
	}
	else{
		printf("Wrong input\n");
	}
}
