#include <stdlib.h>
#include <stdio.h>


int * fun_allocation(void)
{
    int *x = malloc(sizeof *x);
    if (x == NULL)
    {
        /* Something went wrong */
        return NULL;
    }
    *x = 7;
    return x;
}
void fun_price(int *x)
{
    /* NB: calling this function with an invalid or null pointer
causes undefined behaviour. */
    *x = 10;
}
int main(void)
{
    {
        /* Use allocation() */
        int *foo = fun_allocation();
        if (foo == NULL)
        {
            /* Something went wrong */
            return 1;
        }
        printf("The drink's value set by fun_allocation() is %i\n", *foo);
        /* Will output: "The value set by fun_allocation() is 10" */
        free(foo);
        /* Tidy up */
    }


    {
        /* Use fun_price() */
        int i_bar_price;
        fun_price(&i_bar_price);
        printf("The bar price set by fun_price() is %i\n", i_bar_price);
        /* Will output: "The value set by fun_price() is 10" */
    }
    return 0;
}