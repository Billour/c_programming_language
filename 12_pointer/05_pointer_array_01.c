#include <stdio.h>
#include <stdlib.h>

/*
    Pointer with array
This example will be going to show you, how to use pointer to access an array data.
*/
int main(void)
{
    char c_string[] = "Ubuntu on Nvidia jetson nano.";
    char *ptr;

    ptr = c_string;

    do
    {
        printf("%c \n", *ptr);
        ptr++;

    } while (*ptr != '\0');


    system("pause");
    return 0;
}