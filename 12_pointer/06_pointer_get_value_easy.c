#include <stdio.h>
#include <stdlib.h>

/*
    Pointer with array ptr[]
This example will be going to show you, how to use pointer to access an array data.
*/
int main(void)
{
    char c_string[] = "Ubuntu on Nvidia jetson nano.";
    char *ptr;

    ptr = c_string;

    for (int i = 0; i < 6; i++)
    {
        /*Get value of pointer just like array ptr[]*/
        printf("NO: %d  value:  %c \n", i, ptr[i]);
    }

    system("pause");
    return 0;
}