#include <stdio.h>
#include <stdlib.h>

int main()
{

    char c_ticket_yn = 'n';
    char c_passport_yn = 'n';
    int i_go_abroad;

    printf("\n  Is the passport ready? \'y\' or \'n\'  ");
    c_passport_yn = getchar();

    printf("  Is the ticket ready?  \n");
    c_ticket_yn = getchar();

    i_go_abroad =( c_passport_yn == 'y'  && c_ticket_yn =='y')? 1: 0 ;

    printf(" 1 We can go abroad,  0 We can't go. : %d \n", i_go_abroad);


    system("pause");
    return 0;
}
