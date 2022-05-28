#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i_father_age = 32;
    int i_boy_age = 4;
    int i_girl_age = 1;

    printf("  If the  answer is correct than screen will print \"1\"   \n"  );
    printf("   The father's age is old  than the boy: %d \n",   i_father_age > i_boy_age );
    printf("   The father's age is younger than the boy: %d \n",   i_father_age < i_boy_age );
    printf("   The father's age is not equal than the girl: %d \n",   i_father_age != i_girl_age );
    printf("   The boy's age is equal than the girl: %d \n",    i_boy_age == i_girl_age);
    printf("   The father's age is old or equal than the boy: %d \n",    i_father_age >= i_boy_age);
    printf("   The girl's age is younger than the boy: %d \n",   i_girl_age <= i_boy_age );

    system("pause");
    return 0;
}
