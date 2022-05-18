#include <stdio.h>
#include<stdlib.h>

int main(void)
{
    int a,b,c;
    char str[3][6];
/*int is 4 bytes fore each one.*/
    printf(" a's memory space: %p \n", &a);
    printf(" b's memory space: %p \n", &b);
    printf(" c's memory space: %p \n", &c);

    printf(" str[0]'s memory space: %p \n", &str[0]);
    printf(" str[1]'s memory space: %p \n", &str[1]);
    printf(" str[2]'s memory space: %p \n", &str[2]);
    system("pause");
    return 0;
}

