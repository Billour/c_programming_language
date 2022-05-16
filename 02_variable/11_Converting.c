#include<stdio.h>
#include<stdlib.h>
/* 
Converting one datatype into another is known as type casting or, type-conversion. 
For example, if you want to store a 'long' value into a simple integer then you can type cast 'long' to 'int'.
 You can convert the values from one type to another explicitly using the cast operator as follows −

(type_name) expression

*/

int main(void)
{
    int i_dividend = 25;
    int i_divisor = 3;
    float f_result ;

    f_result = i_dividend/ i_divisor;
    printf("Before converting is :  %g  \n", f_result); /* Using %g to printf out of result.*/


    f_result = (float)i_dividend/ i_divisor;
    printf("After converting is :  %g  \n", f_result); /* Using %g to printf out of result.*/

    system("pause");
    return 0;
}