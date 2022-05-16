#include<stdio.h>
#include<stdlib.h>


int main(void)
{
    int i_milk = 20;
    int i_burger = 60;
    int i_cabbage = 12;
    int i_total =0;/* Total price of the order. */

    i_total = i_milk*1 + i_burger *1  +i_cabbage *1; /* I ordered each one of them. */

    printf("I ordered one Milk ,one Burger,one Cabbage  \n");
    printf("The total price:  %d\n", i_total);
    

    system("pause");
    return 0;
}