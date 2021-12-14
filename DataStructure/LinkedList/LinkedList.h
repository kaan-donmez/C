/*
 ******************************************************************************
 *   @file  	 LinkedList.h
 *   @brief 	 This file contains all the function prototypes
 *   @date       Aug 30, 2021
 *   @author	 Kaan Dönmez
 *   @version    1.0.0
 ******************************************************************************
 */

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
