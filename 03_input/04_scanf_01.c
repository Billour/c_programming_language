#include <stdio.h>
#include <stdlib.h>

/*This is input data. The exmaple will show you multinput.
2
5 1

*/
int main(void)
{
    int i_s[5];

    scanf("%d", &i_s[0]);
    scanf("%d %d", &i_s[1], &i_s[2]);

    printf("Output area: \n\n");
    printf("%d \n", i_s[0]);
    printf("%d  %d\n", i_s[1], i_s[2]);
    printf("\n");

    system("pause");
    return 0;
}
