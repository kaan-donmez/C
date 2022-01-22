#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

#include "stdio.h"
#include "stdlib.h"

typedef struct LinkedList
{
	int value;
	struct LinkedList *next;
} LinkedList_t;

void ShowLinkedList(LinkedList_t *root);
void AddLinkedList(LinkedList_t *root, int value);
void AddSequentLinkedList();
void DeleteEntityLinkedList();

#endif /* LINKED_LIST_H_ */
