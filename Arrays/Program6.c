
// Take 5 int value from user and print addition of all elements

#include<stdio.h>
void main(){
	int iarr[5],sum=0;
	for(int i=0 ; i<5 ; i++){
		printf("Enter value %d : ",i+1);
		scanf("%d",&iarr[i]);
	}
	for(int i=0 ; i<5 ; i++){
		sum+=iarr[i];
				
	}
	printf("Addition of all array elemnts are %d\n",sum);
}
