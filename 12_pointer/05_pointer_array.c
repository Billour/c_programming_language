#include <stdio.h>
#include <stdlib.h>

/*
    Pointer with array
This example will be going to show you, how to use pointer to access an array data.
*/
int main(void)
{
    int i_sales_1 = 600, i_sales_2 = 700, i_sales_3 = 800; /* Declare age and gender.*/
    int *ptr;

    ptr = &i_sales_3;
    printf("  Sales3 gold :  %d \n", *ptr);

    system("pause");
    return 0;
}
