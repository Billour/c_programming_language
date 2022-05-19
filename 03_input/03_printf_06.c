#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long long int l_global_population = 754201144;

    /* Output area*/
    printf("  %14lld  \n", l_global_population);

    printf("  %+14lld  \n", l_global_population);

    printf("  %-+14lld  \n", l_global_population);
    system("pause");
    return 0;
}
