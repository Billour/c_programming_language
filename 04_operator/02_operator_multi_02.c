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
    int i_a = 10, i_b = 20, i_c;
    printf("Original a : %d   , b: %d  \n", i_a, i_b);

    i_c = i_a++ * i_b;
    printf("i_c = i_a++*i_b:  %d \n", i_c);

    i_c = ++i_a * i_b;
    printf("i_c =++ i_a*i_b:  %d \n", i_c);

    i_c = ++i_a*i_b++;
    printf("i_c =++ i_a*i_b++:  %d \n", i_c);

    system("pause");
    return 0;
}
