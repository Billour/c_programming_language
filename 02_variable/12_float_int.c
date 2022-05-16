#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    float f_my_deposit = 20000; /* USD */
    float f_iphone_price = 599;
    

    printf("I can buy  %d  iphones. \n", (int)(f_my_deposit/f_iphone_price) );
    /*
    Using (int ) to convert float data type.
    Using %d to print the number.
    */

    system("pause");
    return 0;
}