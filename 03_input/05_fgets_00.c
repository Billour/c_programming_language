#include <stdio.h>
#include <stdlib.h>

/*This is input data. The exmaple will show you multinput.
2
5 1

*/
int main(void)
{
    char c_str[20];
    fgets(c_str, 20, stdin);

    int i = 0;
    printf("\n Output area: \n\n");
    puts(c_str);

    printf("\n do while\n \n");
    do
    {
       /* if(c_str[i] =='\0')
            break;
	    */
        printf("%c, \n", c_str[i]);
        i++;
    } while (i < 19);
    

    system("pause");
    return 0;
}
