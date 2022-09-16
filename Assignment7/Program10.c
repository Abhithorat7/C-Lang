/*
 take input from user
 D1 C2 B3 A4
 e5 f4 g3 h2
 F3 E4 D5 C6
 g7 h6 i5 j4
*/

#include<stdio.h>
void main(){
	int rows,a;
	printf("Enter rows : ");
	scanf("%d",&rows);
	for(int i=1 ; i<=rows ; i++){
		int ch=63+rows+i,num=i;
		for(int j=1 ; j<=rows ; j++){
			if(i%2!=0){
				printf("%c%d\t",ch,num);
				ch--;
				num++;
				a=num;
			
			}
			else{
				printf("%c%d\t",ch+32,a);
				ch++;
				a--;

			}

		}
		printf("\n");
	}
}
