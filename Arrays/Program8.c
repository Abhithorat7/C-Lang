// print element if divisible by 4 & 5 in an array

#include<stdio.h>
void main(){
	int size;
	printf("enter size of an array : ");
	scanf("%d",&size);
	int iarr[size];
	for(int i = 0 ; i<size ; i++){
		printf("Enter element %d : ",i+1);
		scanf("%d",&iarr[i]);

	}
	for(int i=0 ;i<size ; i++){
		if(iarr[i]%4==0 && iarr[i]%5==0){
			printf("%d is divisible by 4 & 5\n",iarr[i]);
		}

	}
}
