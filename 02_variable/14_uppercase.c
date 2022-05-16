#include<stdio.h>
#include<stdlib.h>

/* Uppercase to lowercase*/
int main(void)
{
    char c_upper = 'A'; /* Uppercase*/
    char c_lower = 'z'; /* Lowercase*/
    

    printf(" %c ,  %c , %c  Converting from uppercase to lowercase  %c ,  %c , %c  \n",  c_upper, c_upper+1, c_upper+2, c_upper+32, c_upper+33, c_upper +34);
    printf(" %c ,  %c , %c  Converting from lowercase  to uppercase   %c ,  %c , %c  \n",  c_lower, c_lower-1, c_lower-2, c_lower-32, c_lower-33, c_lower -34);

    system("pause");
    return 0;
}