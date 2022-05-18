#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i_a = 11, i_b = 22, i_c = 33;
    int *ptr_a, *ptr_b, *ptr_c;

    /*int is 4 bytes fore each one.*/
    printf(" a's memory space: %p, value = %d \n", &i_a, i_a);
    printf(" b's memory space: %p, value = %d  \n", &i_b, i_b);
    printf(" c's memory space: %p, value = %d  \n", &i_c, i_c);

    /* Assign them value.*/
    ptr_a = &i_a;
    ptr_b = &i_b;
    ptr_c = &i_c;

    /*Output area. To print address and values.*/
    printf("&ptr_a : %p, pointer ptr_a's memory space: %p, value is : %d  \n", &ptr_a  , ptr_a  ,  *ptr_a );
    printf("&ptr_b : %p, pointer ptr_b's memory space: %p, value is : %d   \n", &ptr_b  ,ptr_b  ,  *ptr_b);
    printf("&ptr_c : %p, pointer ptr_c's memory space: %p, value is : %d   \n", &ptr_c  , ptr_c  ,  *ptr_c);
    system("pause");
    return 0;
}
