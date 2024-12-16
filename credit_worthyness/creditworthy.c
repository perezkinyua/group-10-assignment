#include <stdio.h>
#include <stdlib.h>

int main (){
    int number_customer, item_quantity;
    float item_price, credit_limit, value_goods;

    printf("Input number of customers: \n");
    scanf("%i", &number_customer);
    while(number_customer > 0){

        printf("Input Credit limit: \n");
        scanf("%f", &credit_limit);

        printf("Input Item price: \n");
        scanf("%f", &item_price);
            do
            {
                
            printf("Input number of items to purchase: \n");
            scanf("%i", &item_quantity);

            value_goods= item_price * item_quantity ;

            if (value_goods > credit_limit){
                printf("Sorry you cannot purchase goods worthy such on credit \n");
                printf("plz input a lower quantity: \n ");
            }
            
            }while (value_goods > credit_limit); 

            printf("Thank you for purchasing from us \n");
            printf("The total value for your goods is %.2f \n",value_goods);
            printf("------------------------------------------------- \n");

        number_customer = number_customer -1;

    }


}