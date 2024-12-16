#include <stdio.h>
#include <stdlib.h>
int main(){

    int number_of_dependants, gross_pay ;
    float  net_pay, tax_payable;

    do{
        printf("Input number of dependants; \n");
        scanf("%i",&number_of_dependants);

        printf("Input Gross Pay: \n");
        scanf("%i",&gross_pay);
        // input validation
        if ((number_of_dependants < 0 || gross_pay < 0))
        {
            printf("!!!!!INVALID !!!!! \n");
            printf("plz input correct positive value \n");
        }
        
    } while (number_of_dependants < 0 || gross_pay < 0);
    
    if (number_of_dependants <= 3)
    {
        if (gross_pay >= 20000){
            tax_payable = gross_pay*(35/100.0) ;
            net_pay = gross_pay - tax_payable ;
        }else if (gross_pay >= 10000){
            tax_payable = gross_pay *(15/100.0) ;
            net_pay = gross_pay - tax_payable ;
        }else {
            tax_payable = gross_pay* 0 ;
            net_pay = gross_pay - tax_payable ;
        }
    
    }else{
        if (gross_pay >= 20000){
            tax_payable = gross_pay*(25/100.0) ;
            net_pay = gross_pay - tax_payable ;
        }else if (gross_pay >= 10000){
            tax_payable = gross_pay *(10/100.0) ;
            net_pay = gross_pay - tax_payable ;
        }else {
            tax_payable = gross_pay* 0 ;
            net_pay = gross_pay - tax_payable ;
        }

    }

    printf("The Gross pay is :Ksh %i \n", gross_pay);
    printf("The Tax payable is :Ksh %.2f \n",tax_payable);
    printf("The Net pay is :Ksh %.2f", net_pay);

}