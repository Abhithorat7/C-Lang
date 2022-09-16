/* WAP to check wheather the given input is a pythagorus triplet or not */

#include<stdio.h>
void main(){
	int x,y,z;
		printf("Enter value for side 1 : ");
		scanf("%d",&x);
		printf("Enter value for side 2 : ");
		scanf("%d",&y);
		printf("Enter value for hypotenous : ");
		scanf("%d",&z);

		if(x>0 && y>0 && z>0){

			if(x*x+y*y==z*z){
				printf("%d,%d,%d is a pythagorus triplet\n",x,y,z);
			}
		
			else{
				printf("%d,%d,%d is not a pythagorus triplet\n",x,y,z);
			}
		}
 		else{
			printf("Wrong input\n");
		}
}
