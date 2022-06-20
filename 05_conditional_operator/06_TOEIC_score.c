#include<stdio.h>
#include<stdlib.h>

int main()
{
    char c_toeic;
    char c_graduate;
    int i_score;

    printf("Please, enter. Did your attend TOEIC:(y/n) ");
    scanf("%c", &c_toeic );

    if(c_toeic == 'y' ||c_toeic == 'Y')
    {
        printf(" Please enter your score: ");
        scanf("%d", &i_score );
        if(i_score >= 800)
            printf(" Pass. \n");
        else
            printf(" Please, Attend TOEIC agagin. \n");    
     }
    else
    {
        printf(" Did you know that if your were not to pass TOEIC, then you can't graduate:(y/n) ");
        scanf("%c", &c_graduate );
        if(c_graduate == 'y' ||c_graduate == 'Y')    
            printf(" c_graduate == Y \n");
        else
            printf(" c_graduate == other \n");
    }
        


    system("pause");
    return 0;
}