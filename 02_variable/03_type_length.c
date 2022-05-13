#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	printf("Short int's length: %ld bytes\n", sizeof(short int));
	printf("Unsigned short int's length: %ld bytes\n", sizeof(unsigned short int));
	printf("Unsigned long int's length: %ld bytes\n", sizeof(unsigned long int));
	printf("long long int's length: %ld bytes \n", sizeof(long long int));
	printf("long double's length: %ld bytes \n", sizeof(long double));

	system("pause");
	return 0;
}
