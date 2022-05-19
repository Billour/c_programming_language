#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const float f_people = 25687901;/* How many people in this area?*/

    /* Output area*/
    printf("Floating-point  %f  \n", f_people);

    printf("Scientific notation  %e  \n", f_people);
    printf("Scientific notation  %E  \n", f_people);
    
    system("pause");
    return 0;
}
