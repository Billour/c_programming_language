#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float f_salary = 8500.66;
    float f_kpi = 99.8 / 100;
    float f_bonus;
    f_bonus = f_salary * f_kpi * 1.112;

    /* Output area*/
    printf(" Your salary is : %6.2f  \n", f_bonus);

    system("pause");
    return 0;
}
