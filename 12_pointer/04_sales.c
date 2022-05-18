#include <stdio.h>
#include <stdlib.h>

/*
If you coding like this, it will be an error.

int *ptr;
*ptr=20; //You can't directly set the value 20 to *ptr .
*/
int main(void)
{
    int i_sales_1 = 600, i_sales_2 = 700, i_sales_3 = 800; /* Declare age and gender.*/
    int *ptr;

    ptr = &i_sales_1;
    printf("  Sales1 gold :  %d \n", *ptr);/* Using '*ptr' to get value.  */


    ptr = &i_sales_2;
    printf("  Sales1 gold :  %d \n", *ptr);


    ptr = &i_sales_3;
    printf("  Sales3 gold :  %d \n", *ptr);

    system("pause");
    return 0;
}
