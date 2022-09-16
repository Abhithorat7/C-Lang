/*
 take no. from user
 D4 C3 B2 A1
 A1 B2 C3 D4
 D4 C3 B2 A1
 A1 B2 C3 D4
*/

#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows : ");
	scanf("%d",&rows);
	for(int i=0 ; i<rows ; i++){
		int ch=64+rows,num=1,ch1=65;
		for(int j=rows ; j>=1 ; j--){
			if(i%2==0){
				printf("%c%d ",ch,j);
				ch--;
			}
			else{
				printf("%c%d ",ch1,num);
				ch1++;
				num++;
			}
		}
		printf("\n");
	}
}
