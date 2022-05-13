#include <stdio.h>

#define PI 3.1416
int main(void)
{
	PI = 3.11111;/* You will get an Error from there.*/
	/* You can't change value of PI.*/
	/*01_get_error.c:6:5: error: lvalue required as left operand of assignment */
	system("pause");
	return 0;
}
