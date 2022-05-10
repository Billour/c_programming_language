#include <stdio.h>
#include <stdlib.h>
/*
 * Billour Ou
 * 20220509
 * version:01
 * */
int main()
{
	int n_input, i, *ptr, sum = 0;
	printf("(The max  elements is five!)\n");
	printf("Enter number of elements:");

	/*Getting numbers of inputer and checking input error
	 * the max numbers of input is five.
	 * */
	do{
		scanf("%d", &n_input);
		if(n_input >5 || n_input <0)
			printf("You got an error! Please try again!");
	}while(n_input > 5 ||  n_input < 0);
	/*Checking not positive integer*/



	/*The name 'malloc' stands for memory allocation.

	The malloc() function reserves a block of memory of the specified number of bytes. */
	ptr = (int *) malloc(n_input * sizeof(int));
	


	/*Checking memory allocated Error!*/
	if(ptr == NULL)
	{
		printf("Error! memory not allocated.");
		exit(0);
	}

	/*Input area*/
	printf("Enter elements:\n");
	for(i = 0; i<n_input ; ++i)
	{
		printf("The %d :",i+1);
		scanf("%d", ptr + i);
		sum += *(ptr +i);
	}
	/*end of Input area*/


	printf("The sum is :%d \n", sum);

	/*Free the memory of ptr. The most important command free()*/
	free(ptr);

	system("pause");
	return 0;
}
