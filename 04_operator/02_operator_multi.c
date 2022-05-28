#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
  Original  Equal
    a=a+b    a+=b
    a=a-b     a-=b
    a=a*b     a*=b
    a=a/b     a/=b
    a=a%b   a%=b
*/

    float f_interest = 0.0175;
    float f_principal = 10000;/*10000  */

    printf("  The principal is  10000, interest 1.75%% per  one year . \n");
    printf("The first year: %-9.00f  \n", f_principal *= (1 +f_interest));
    printf("The second year: %-9.00f  \n", f_principal *= (1 +f_interest));
    printf("The third year: %-9.00f \n", f_principal *= (1 +f_interest));
    printf("The fourth year: %-9.00f  \n", f_principal *= (1 +f_interest));
    printf("The fifth year: %-9.00f  \n", f_principal *= (1 +f_interest));

    system("pause");
    return 0;
}
