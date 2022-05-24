#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
	int value;
	struct node * next;
} node;

int main(void)
{
	int length, i;

	printf("Enter size of the list: \n");
	scanf("Size :%d", &length);
	
	struct node * headNode, *cNode, *temp;

	printf("1:\n");
	while(temp!=NULL)
	{
		printf("%d \n", temp->value);
		temp = temp->next;

	printf("2:\n");
	}
	for(i = 0; i <length; i++)
	{
		cNode = (node *) malloc(sizeof(node));
		printf("Enter element %d : \n", (i+1));
		scanf("size: %d", &cNode->value);

	printf("3:\n");
		if(i ==0)
		{
			headNode = temp = cNode;		
		}else{
			temp->next = cNode;
			temp= cNode;
		
		}
	}
	temp->next = NULL;
	temp = headNode;

	printf("Iterating through the elements: \n");
	while(temp!=NULL)
	{
		printf("%d \n", temp->value);
		temp = temp->next;
	}

	/*Importer to free memory.
	temp = headNode;
	while(temp!=NULL)
	{	cNode =temp;
		free(cNode);
		temp = temp->next;
	}
*/
	system("pause");
	return 0;
}
