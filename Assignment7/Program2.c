/* take a no. from user
 
   3 b 1 d
   a 2 c 0
   3 b 1 d
   a 2 c 0
*/

#include<stdio.h>
void main(){
	int rows,cols;
	printf("Enter rows : ");
	scanf("%d",&rows);	
	for(int i=0 ; i<rows ; i++){
		int num=97,num1=rows-1;
		for(int j=rows ; j>0 ; j--){
			if(i%2==0){
				if(j%2==0){
					printf(" %d ",num1);
				}
			 	else{
					printf(" %c ",num);
				}
			}else{
				if(j%2==0){
					printf(" %c ",num);
				}
				else{
					printf(" %d ",num1);
				}
			}
			num++;
			num1--;
		}
		printf("\n");

	}
}

