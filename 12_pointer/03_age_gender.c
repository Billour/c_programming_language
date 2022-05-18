#include <stdio.h>
#include <stdlib.h>

/*
If you coding like this, it will be an error.

int *ptr;
*ptr=20; //You can't directly set the value 20 to *ptr .
*/
int main(void)
{
    int *ptr_age, i_age = 20; /* Declare age and gender.*/
    char *ptr_gender, c_gender = 'F';

    ptr_age = &i_age; /*Note : You must have used '&' to get memory's address.*/
    ptr_gender = &c_gender;

    /* Output area*/
    printf("  %d old. \n", *ptr_age); /* Note :  You must have used '*' to get pointer's value. */
    printf("  Gender:  %c \n", *ptr_gender);
    system("pause");
    return 0;
}
