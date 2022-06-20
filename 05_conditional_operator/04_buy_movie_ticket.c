#include<stdio.h>
#include<stdlib.h>

int main()
{
    float f_age;
    int i_ticket_price;

    printf("\n please, tell mey how old are you?");
    scanf("%f", &f_age);

    if(f_age >= 65 || f_age < 12)
    {
        
        i_ticket_price = 200;

    }else
    {
        printf("\n You need to buy a ticket.");
        i_ticket_price   =300;

    }
    printf("\n Please, pay  $ %d dollar.\n", i_ticket_price);
    system("pause");
    return 0;
}