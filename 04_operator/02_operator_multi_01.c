#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
  Priority  Original  Explain
    1               a++           a go first , and then a=a+1
    1               a--             a go first , and then a=a-1
    2               ++a           a = a+1 go first, and then hand up a
    2               --a             a = a-1 go first, and then hand up a
*/
    int i_a = 10, i_b = 10;

    printf("What different between ++ and --. \n");
    printf("Original a : %d   , b: %d  \n", i_a, i_b);

    printf("a++  =:  %d \n",  i_a++);
    printf("++b  =:  %d \n", ++i_b);
    printf("a's new data  %d , b's new data  %d \n\n", i_a, i_b);

    printf("a--=:  %d \n",  i_a--);
    printf("--b=:  %d \n", --i_b);
    printf("a's new data  %d , b's new data  %d \n", i_a, i_b);

    system("pause");
    return 0;
}
