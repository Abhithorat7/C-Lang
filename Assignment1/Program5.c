/* WAP that takes the number from 0 to 5 and prints its spelling,if the number is grater than 5 print enter number is greater than 5 */

#include<stdio.h>
void main(){
	int number;
	printf("Enter number : ");
	scanf("%d",&number);
	
	switch(number){
		case 0:
			printf("Zero");
			break;
		case 1:
			printf("One\n");
			break;
		case 2:
			printf("Two\n");
			break;
		case 3:
			printf("Three\n");
			break;
		case 4:
			printf("Four\n");
			break;
		case 5:
			printf("Five\n");
			break;
		default:
			printf("Entered number is grater than 5\n");
	}
}

