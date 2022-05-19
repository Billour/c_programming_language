#include <stdio.h>
#include <stdlib.h>

/*
*/
int main(void)
{
    char c_collage;
    int i_classroom;

    printf("Please key in one char, and three digits of classroom: ");

    scanf("%c %3d", &c_collage, &i_classroom);

    printf("\n Output area: \n\n");

    printf("Your classroom is :%c%03d\n", c_collage, i_classroom);
    printf("\n");

    system("pause");
    return 0;
}
