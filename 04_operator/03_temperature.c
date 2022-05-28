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
    float i_F, i_C;

    printf("Please enter temperature of Celsius:");
    scanf("%f", &i_C);
    i_F = i_C * 9 / 5 + 32;

    printf(" \n temperature of Celsius %3.2f  equal Fahrenheit %3.2f  \n", i_C, i_F);

    system("pause");
    return 0;
}
