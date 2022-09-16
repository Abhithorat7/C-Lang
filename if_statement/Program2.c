
#include<stdio.h>
void main(){
	float income;
	printf("Enter your income : ");
	scanf("%f",&income);
	printf("Your income is %f\n",income);

	if(income>=0 && income<=500000){
		income=income*0.5;
		printf("Your tax amount is %f\n",income);
	}
	if(income>=500000 && income<=1000000){
		income=income*0.10;
		printf("Your tax amount is %f\n",income);
	}
	if(income>=1000000 && income<=1500000){
                income=income*0.15;
                printf("Your tax amount is %f\n",income);
        }
	if(income>=1500000 && income<=2000000){
                income=income*0.20;
                printf("Your tax amount is %f\n",income);
        }

}
