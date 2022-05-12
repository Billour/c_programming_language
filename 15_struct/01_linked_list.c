#include <stdio.h>
#include <stdlib.h>

/* Linked List C language example 01
 * Author:Billour Ou
 * Date: 20220512
 * version:01
 *
 */

/* Declare a Linked list struct 'Node' */
struct Node{
	int data;
	struct Node * next;
};

int main(void)
{
	/*Declare three Nodes, and set NULL to them. */
	struct Node * head    =NULL; 
	struct Node * second  =NULL; 
	struct Node * third   =NULL; 

	/* Declare three dynamic memory space in computer
	 * Note: 
	 *      Useing 'free()' to free three dynamic memory space, in the finial of the program.
	 * */
	head   = (struct Node *) malloc(sizeof(struct Node));
	second = (struct Node *) malloc(sizeof(struct Node));
	third  = (struct Node *) malloc(sizeof(struct Node));

	/* Setting data into head, second, third
	 * Important:
	 *	    1. (struct Node *) is pointer, then use '->' to get data.
	 *          2. Definite use the 'free();' to release memory of 'head', 'second', 'third'
	 * */
	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	/* Output area.*/
	printf("%d \n",head->data);
	printf("%p \n\n", head->next);
	printf("%d \n", second->data);
	printf("%p \n\n", second->next);
	printf("%d \n", third->data);
	printf("%p \n\n", third->next);

	/* Important Area:
	 *    Free three memory space. 'free()'
	 * */
	free(head);
	free(second);
	free(third);


	system("pause");
	return 0;
}
