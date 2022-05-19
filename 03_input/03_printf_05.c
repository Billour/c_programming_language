#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i_population = 5421144;

    /* Output area*/
    printf("  %12d  \n", i_population);

    /* Align left*/
    printf("  %-12d  \n", i_population);
    system("pause");
    return 0;
}
