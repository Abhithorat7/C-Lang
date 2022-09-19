// error :  invalid operands to binary + (have ‘char *’ and ‘char *’)

#include<stdio.h>
void main(){
	char ch1='A';
	char ch2='B';

	char *ptr1=&ch1;
	char *ptr2=&ch2;

	printf("%d\n",*ptr1+*ptr2);
	printf("%p\n",ptr1+ptr2);
}

