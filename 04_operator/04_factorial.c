#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    1!  2!  3!  4!  5!
*/

    int i_factorial = 1, i_temp = 1;

    i_factorial *= i_temp++;
    printf(" 1! = %d \n", i_factorial);

    i_factorial *= i_temp++;
    printf(" 2! = %d \n", i_factorial);

    i_factorial *= i_temp++;
    printf(" 3! = %d \n", i_factorial);

    i_factorial *= i_temp++;
    printf(" 4! = %d \n", i_factorial);

    i_factorial *= i_temp++;
    printf(" 5! = %d \n", i_factorial);

    system("pause");
    return 0;
}
