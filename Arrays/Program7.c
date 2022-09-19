//take a size from user and input from  user and print if element is present in array  or not

#include<stdio.h>
void main(){
	int size;
	printf("Enter size of array : ");
	scanf("%d",&size);
	int iarr[size];
	for(int i=0 ; i<size ; i++){
		printf("Enter value %d : ",i+1);
		scanf("%d",&iarr[i]);
	}
	int search;
	printf("Enter element you want to search in array : ");
	scanf("%d",&search);
	for(int i=0 ; i<size ; i++){
		if(search==iarr[i]){
			printf("%d is found in an array\n",search);
			break;
		}
		else{
			printf("%d is not found in array\n",search);
			break;
		}
	}
}

