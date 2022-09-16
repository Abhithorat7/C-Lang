/* WAP,take a number and print whether it is possitive or negative.Take all the values from the user. */

#include<stdio.h>
void main(){
	int num;
	printf("Enter number : ");
	scanf("%d", &num);

	if(num>=0){
		printf("%d is a posssitive number\n",num);
	}else{
		printf("%d is a negative number\n",num);
	}
}

