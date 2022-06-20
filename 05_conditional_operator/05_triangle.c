#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i_a, i_b, i_c;
    printf("Please, enter your triangle length of three number: ");
    scanf("%d %d %d", &i_a, &i_b, &i_c );

    if((i_a+i_b)> i_c)
     {
         if((i_a+i_c)>i_b)
        {
            if((i_b+i_c) >i_a)
                printf("Yes, True they can be triangle. \n");
            else
                printf("No. They can't be triangle. \n");
        }
        else
                printf("No. They can't be triangle. \n");
     }
    else
        printf("No. They can't be triangle. \n");


    system("pause");
    return 0;
}