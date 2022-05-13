#include <stdio.h>
#include <stdlib.h>

#define PI  3.1416
#define V_DATA 7000
#define H_DATA 7000

/*  This example will show you a overflow situation.
 *
 * */
int main(void)
{
	short int si_v;
	short int si_h;

	si_v = 2 * V_DATA * PI;
	si_h = 2 * H_DATA * PI;
/* There will show the error message to your screen, which you compile using gcc.
 *
  04_overflow.c:13:9: warning: overflow in implicit constant conversion [-Woverflow]
  si_v = 2 * V_DATA * PI;
         ^

 *
 *
 * */
	printf("Result : %d \n", si_v);
	printf("Result : %d \n", si_h);
	system("pause");
	return 0;
}
