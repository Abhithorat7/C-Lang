
/*Write a program to print the addition of 1 to 10 with 10 to 1 */

#include<stdio.h>
void main(){
	int sum=0,a=1;
	for(int i=10 ; i>=1 ; i--){
		sum=a+i;
		printf("%d + %d = %d\n",a,i,sum);
		a++;
	}
}
