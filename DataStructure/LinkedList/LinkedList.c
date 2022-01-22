#include "LinkedList.h"

void ShowLinkedList(LinkedList_t *root)
{
	while (root != NULL)
	{
		printf("%d\n", root->value);
		root = root->next;
	}
}

void AddLinkedList(LinkedList_t *root, int value)
{
	while (root->next != NULL)
	{
		root = root->next;
	}
	root->next = (LinkedList_t *)malloc(sizeof(LinkedList_t));
	root->next->value = value;
	root->next->next = NULL;
}
