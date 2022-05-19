#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i_f, i_s;

    printf("Plese keyin two integers: ");
    scanf("%d, %d", &i_f, &i_s);

    printf("\n");

    printf("The first: %d, the second: %d \n", i_f, i_s);

    printf("Sum of all: %d\n", i_f + i_s);
    system("pause");
    return 0;
}
