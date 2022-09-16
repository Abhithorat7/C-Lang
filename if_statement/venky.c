#include <stdio.h>
int main()
{
    int ch,pch,bill,qty,bch;

    printf("\n\t\t\t Venky's Express\n");

    printf("1.Tea - 30 Rs\n");
    printf("2.Coffee - 50 Rs\n");
    printf("3.Cold Coffee - 70 Rs\n");
    printf("4.Burger\n");
    printf("5.Pizza\n");
    printf("6.Nuggets - 200 Rs\n");
    printf("7.French Fries - 100 Rs\n");
    printf("8.Sandwitch - 100 Rs\n");
    printf("9.Coke - 50 Rs\n");
    printf("10.Softy - 30 Rs\n");

    printf("please select menu choice : ");
    scanf("%d",&ch);

    if(ch==1){
         printf("You have selected TEA\n");
         printf("Plz enter quantity for TEA : ");
         scanf("%d",& qty);

         bill=qty*30;

         printf("\n The tea Bill amount is %d\n",bill);


    } //end Tea

    else if(ch==2){
        printf("You have selected Coffee\n");
        printf("\n Plz enter quantity for Coffee\n");
        scanf("%d",&qty);

        bill=qty*50;

        printf("The coffee bill amount is %d\n",bill);

    } //end coffee

    else if(ch==3){
        printf("You have selected Cold coffee\n");
        printf("\n Plz enter quantity for cold coffee\n");
        scanf("%d",&qty);

        bill=qty*70;

        printf("\n The cold coffee bill amount is %d\n",bill);

    } //cold coffee end

    else if(ch==4){
        printf("You have order for Burger\n");
        printf("Press 1-Veg Burger\n");
        printf("Press 2-chicken Burger\n");
        scanf("%d",&bch);

        if(bch==1){
            printf("Plz enter quantity for veg burger\n");
            scanf("%d",&qty);

            bill=qty*100;

            printf("\n The burger bill amount is %d\n",bill);
        }
        else if(bch==2){
            printf("Plz enter quantity for chicken burger\n");
            scanf("%d",&qty);

            bill=qty*200;

            printf("The burger bill amount is %d\n",bill);
        }
        else{
            printf("Invalid Choice\n");
        }
    } //end burger

    else if(ch==5){
        printf("You have order for Pizza\n");
        printf("Press 1-small size\n");
        printf("press 2-Regular size\n");
        printf("Press 3-Large size\n");
        scanf("%d",&pch);

        if(pch==1){
            printf("Plz enter quantity for small size : ");
            scanf("%d",&qty);

            bill=qty*200;

            printf("\n The pizza bill amount is %d\n",bill);
        }

        else if(pch==2){
            printf("Plz enter quantity for regular size : ");
            scanf("%d",&qty);

            bill=qty*300;

            printf("The Pizza bill amount is %d\n",bill);
        }

        else if(pch==3){
            printf("Plz enter quantity for large size : ");
            scanf("%d",&qty);

            bill=qty*500;

            printf("The pizza bill amount is %d\n",bill);

        }
        else{
            printf("Invalid choice\n");
        }

        
    } // end pizza

    else if(ch==6){
        printf("\n You have selected Nuggets");
        printf("\n Please enter quantity for Nuggets");
        scanf("%d",&qty);

        bill=qty*200;

        printf("The Nuggets bill amount is %d\n",bill);
    } //end Nuggets

    else if(ch==7){
        printf("You have selected French fries\n");
        printf("Plz enter quantity for French fries : ");
        scanf("%d",&qty);

        bill=qty*100;

        printf("The French fries bill amount is %d\n",bill);

    } //end french fries

    else if(ch==8){
        printf("You have selected Sandwitch\n");
        printf("Plz enter quantity for Sandwitch : ");
        scanf("%d",&qty);

        bill=qty*100;

        printf("\n The Sandwitch bill amount is %d\n",bill);
    }

    else if(ch==9){
        printf("You have selected coke\n");
        printf("\n Plz enter quantity for Coke : ");
        scanf("%d",&qty);

        bill=qty*50;

        printf("\n The coke bill amount is %d\n",bill);

    }

    else if(ch==10){
        printf("You have selected softy\n");
        printf("Plz enter quantity for softy : ");
        scanf("%d",&qty);

        bill=qty*30;

        printf("\n The softy bill amount is %d\n",bill);

    }

    return 0 ;
    
}
