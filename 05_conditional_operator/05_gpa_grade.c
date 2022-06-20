#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i_grade;
    printf("Please, enter your score(%% percentage). ");
    scanf("%d", &i_grade );

    if(i_grade >= 80)
        printf("Level : A \n");
    else if(i_grade < 80 && i_grade >= 70)
        printf("Level : B \n");
    else if(i_grade < 70 && i_grade >= 60)
        printf("Level : C \n");
    else if(i_grade < 60 && i_grade >= 50)
        printf("Level : D \n");
    else
        printf("Level : E \n");


    system("pause");
    return 0;
}