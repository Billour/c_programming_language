#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f_salary = 2290.88;
    float f_kpi = 1.34;
    float f_bouns;

    if(f_kpi >= 0.95 )
    {
        f_bouns = f_salary *f_kpi *f_kpi;
        printf("Total bouns: %f \n", f_bouns);
    }
    
    system("pause");
    return 0;
}
