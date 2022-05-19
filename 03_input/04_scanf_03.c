#include <stdio.h>
#include <stdlib.h>

/*
*/
int main(void)
{
    char c_gender;
    short int i_age;

    printf("Input your age: ");
    scanf("%hd", &i_age);

    printf("Input your gender: ");
    scanf(" %c", &c_gender);/* Note: (space)%c  , the import is the  (space ) before the '%'*/

    printf("Your age: %hd and your gender :%c\n", i_age, c_gender);
    printf("\n");

    system("pause");
    return 0;
}
