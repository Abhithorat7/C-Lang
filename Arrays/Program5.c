
//take 5 input from user and and print value if divisible by 2

#include<stdio.h>
void main(){
	int iarr[5];
	for(int i=0 ; i<5 ; i++){
		printf("Enter value %d : ",i+1);
		scanf("%d",&iarr[i]);
	}
	for(int i=0 ; i<5 ; i++){
		if(iarr[i]%2==0){
			printf("%d is divisible by 2\n",iarr[i]);
		}
	}
}
