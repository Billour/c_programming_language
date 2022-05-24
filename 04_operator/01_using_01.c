#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i_sneaker = 2800;
    int i_hodie = 1300;
    int i_toe_socks = 250;
    int i_total = 0;

    i_total = 0.8 * (i_sneaker * 2) + (i_hodie * 0.9 * 1) + (i_toe_socks * 8) * 0.9;
    printf("Total price: %d \n", i_total);
    system("pause");
    return 0;
}
