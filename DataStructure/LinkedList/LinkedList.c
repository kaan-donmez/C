/*
 ******************************************************************************
 *   @file  	 LinkedList.c
 *   @brief 	 This file contains all the function.
 *   @date       Aug 30, 2021
 *   @author	 Kaan Dönmez
 *   @version    1.0.0
 ******************************************************************************
 */

#include "LinkedList.h"

void LinkedListShow(LinkedList_t *root)
{
	while (root != NULL)
	{
		printf("%d\n", root->value);
		root = root->next;
	}
}

void LinkedListAdd(LinkedList_t *root, int value)
{
	while (root->next != NULL)
	{
		root = root->next;
	}
	root->next = (LinkedList_t *)malloc(sizeof(LinkedList_t));
	root->next->value = value;
	root->next->next = NULL;
}
