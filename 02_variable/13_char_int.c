#include<stdio.h>
#include<stdlib.h>

/*Converting  from char to int.*/
int main(void)
{
    char c_letter = 'a';
    int i_ascii=0;
    
    i_ascii =(int) c_letter;

    printf(" Char c_letter : %c ,  c_letter convert to int is : %d  \n",  c_letter , (int) c_letter );
    printf("  (int) c_letter %d ,  (char) i_ascii is : %c  \n",   (int) c_letter, (char) i_ascii );

    system("pause");
    return 0;
}