#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i_cappuccino = 25;
    int i_cup_cappu = 1;
    int i_total =0;

    printf("Cappuccino price: %d, If you buy 10 cups, discount 10%% off ", i_cappuccino);
    scanf("%d", &i_cup_cappu);

    if(i_cup_cappu< 10)
        i_total = i_cappuccino * i_cup_cappu;
    else
        i_total = i_cappuccino *0.9 *i_cup_cappu;

    printf("Bill : %d, Cup_cappu cups: %d \n\n", i_total, i_cup_cappu);
    system("pause");
    return 0;
}