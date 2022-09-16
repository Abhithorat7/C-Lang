/* WAP,take a character and print whether is is in UPPERCASE or lowercase.Take all the values from the user. */

#include<stdio.h>
void main(){
	char ch;

	printf("Enter character : ");
	scanf("%c", &ch);

	if(ch>=65 && ch<=90){
		printf("%c is a Capital character\n",ch);
	}
	else if(ch>=90 && ch<=122){
		printf("%c is a small character\n",ch);
	}
	else{
		printf("Wrong input\n");
	}
}
