
/*take no. from user
 * 1   2  3   4
   25 36  49  64
   9  10  11  12
  169 196 225 256
  */

#include<stdio.h>
void main(){
	int rows,num=1;
	printf("Enter number of rows : ");
	scanf("%d",&rows);
	for(int i=0 ; i<rows ; i++){
		for(int j=1 ; j<=rows ; j++){
			if(i%2==0){
				printf("%d ",num);
			}
			else{
				printf("%d ",num*num);
			}
			num++;
		}
		printf("\n");
	}
}
