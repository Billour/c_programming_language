#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
  Priority  Original  Explain
    1               a++           a go first , and then a=a+1
    1               a--             a go first , and then a=a-1
    2               ++a           a = a+1 go first, and then hand up a
    2               --a             a = a-1 go first, and then hand up a
*/
    int i_coin;
    int i_ten, i_five, i_one;

    printf("Please enter Total of coins:");
    scanf("%d", &i_coin);

    i_ten = i_coin / 10;
    i_five = i_coin % 10 / 5;
    i_one = i_coin % 10 % 5;

    printf(" \n  Ten :%d, Five :%d , One :%d \n", i_ten, i_five, i_one);

    system("pause");
    return 0;
}
