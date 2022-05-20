#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i_ascii;
    printf("Input a char and hit <enter>: ");
    i_ascii = getchar();

    printf("Your ascii: \n");
    putchar(i_ascii);

    printf("\n %c ASCII code is : %d \n", i_ascii, i_ascii);
    printf("\n");

    system("pause");
    return 0;
}
