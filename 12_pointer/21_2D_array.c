#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 2
void fun1(int (*)[COLS], int, int);
int main()
{
    int array_2D[ROWS][COLS] = {{1, 2}, {3, 4}, {5, 6}};

    fun1(array_2D, ROWS, COLS);

    return EXIT_SUCCESS;
}
void fun1(int (*a)[COLS], int i_ROWS, int i_COLS)
{
    int i, j;
    for (i = 0; i < i_ROWS; i++)
    {
        for (j = 0; j < i_COLS; j++)
        {
            printf("array[%d][%d]=%d\n", i, j, a[i][j]);
        }
    }
}