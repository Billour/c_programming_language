#include <stdio.h>
#include <stdlib.h>


int main()
{
    /*
    1!  2!  3!  4!  5!
*/

    int i_factorial = 1, i_temp = 1;
    int  i_number= 5 , i_count =1;
    do
    {
        i_factorial *= i_temp++;
        printf(" %d! = %d \n", i_count, i_factorial);
        i_count++;
        i_number-=1;
    } while (i_number > 0);
    system("pause");
    return 0;
}
