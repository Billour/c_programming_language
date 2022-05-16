#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i_first = 10; /* The first data*/
    int i_second = 60; /* The second data*/
    int i_temp = 0; /* Temp data */

    printf("Before swap those data: i_first : %d, i_second:%d, i_temp: %d .  \n",i_first, i_second, i_temp);

    i_temp = i_first;/* We stored the i_first data to  i_temp.*/
    i_first = i_second; /* Change the i_first data, noe the i_first data is 60.*/
    i_second = i_first;/*  Change the i_second data, noe the i_second data is 10.*/

    printf("After swap: i_first : %d, i_second:%d, i_temp: %d .  \n",i_first, i_second, i_temp);
    
    system("pause");
    return 0;
}