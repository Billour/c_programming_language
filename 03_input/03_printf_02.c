#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const float f_pi = 3.1416; /*pi*/

    /* Output area*/
    printf("  %10.6f  \n", f_pi);

    printf(" %010.6f  \n", f_pi);
    printf("%10.0f  \n", f_pi);
    printf("%010.0f  \n", f_pi);
    system("pause");
    return 0;
}
