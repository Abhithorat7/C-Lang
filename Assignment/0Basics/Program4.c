/*WAP to find min among 2 numbers.Take all the values from the user. */

#include<stdio.h>
void main(){
        int num1,num2;

        printf("Enter num 1 : \n");
        scanf("%d",&num1);
        printf("Enter num 2 : \n");
        scanf("%d",&num2);

        if (num1<num2){
                printf("%d is less than %d\n",num1,num2);

        }else if(num1==num2){
                printf("%d is equal to %d\n",num1,num2);
        }else{
                printf("%d is less than %d\n",num2,num1);
        }
}

