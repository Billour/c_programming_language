#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i_uppercase, i_lowercase;
    char c_ch;

    printf("Please enter an alphabet:");
    //scanf("%c", &i_coin);
    c_ch = getchar();
    printf("%c\n\n ", c_ch);
    i_uppercase = c_ch > 64 && c_ch < 91;

    i_lowercase = c_ch > 96 && c_ch < 123;
    printf("\n If output 1 , it's mening alphabet. If output 0, it is not alphabet.\n");
    printf("\n  %d   .Done. \n", (i_uppercase ||  i_lowercase));
    system("pause");
    return 0;
}
