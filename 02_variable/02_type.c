#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	printf("char's length : %ld bytes\n", sizeof(char) );
	printf("int's length : %ld  bytes\n", sizeof(int));
	printf("float's length : %ld bytes \n", sizeof(float));
	printf("double's length : %ld bytes \n", sizeof(double));
	
	system("pause");
	return 0;
}
