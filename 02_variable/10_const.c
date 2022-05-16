#include<stdio.h>
#include<stdlib.h>
/* When it modifies a data declaration, the const keyword specifies that the object or variable isn't modifiable.*/
int main(void)
{
    const char const_var = 'w';
    /*  const_var = 'x';    
         Try to modify the value of const_var. It will get an error.
    */
    printf("The const_var is  %c  .\n", const_var);

    system("pause");
    return 0;
}