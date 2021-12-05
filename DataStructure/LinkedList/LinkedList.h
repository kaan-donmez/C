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

typedef struct Data_Struct
{
	int x;
	struct Data_Struct *next;
} data_struct_t;

void LinkedListShow(data_struct_t *root);
void LinkedListAdd(data_struct_t *root, int x);

#endif /* LINKED_LIST_H_ */
