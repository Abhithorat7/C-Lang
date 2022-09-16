
/* WAP to print all even numbers in reverse order and odd numbers in the standard way.Both seprately within a range */

#include<stdio.h>
void main(){
	int start,end;

	printf("Enter start : ");
	scanf("%d",&start);
	printf("Enter end : ");
	scanf("%d",&end);
	for(int i=start ; i<=end ; i++){
		if(i%2!=0){
			printf("%d ",i);
		}
	}
	printf("\n");
	for(int j=10 ; j>=1 ; j--){
		if(j%2==0){
			printf("%d ",j);
		}
	}
	printf("\n");
}
