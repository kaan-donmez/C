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

void LinkedListShow(data_struct_t *root)
{
	while (root != NULL)
	{
		printf("%d\n", root->x);
		root = root->next;
	}
}

void LinkedListAdd(data_struct_t *root, int x)
{
	while (root->next != NULL)
	{
		root = root->next;
	}
	root->next = (data_struct_t *)malloc(sizeof(data_struct_t));
	root->next->x = x;
	root->next->next = NULL;
}
