/*
 ******************************************************************************
 *   @file  	 CircularLinkedList.h
 *   @brief 	 This file contains all the function prototypes
 *   @date       Dec 14, 2021
 *   @author	 Kaan Dönmez
 *   @version    1.0.0
 ******************************************************************************
 */

#ifndef __CIRCULAR_LINKED_LIST__
#define __CIRCULAR_LINKED_LIST__

#include "stdlib.h"
#include "stdio.h"
#include "stdint.h"

typedef struct CircularLinkedList
{
    uint32_t value;
    struct CircularLinkedList *next;
} CircularLinkedList_t;

void ShowCircularLinkedList();
void AddCircularLinkedList();
void AddSequentCircularLinkedList();
void DeleteEntityCircularLinkedList();

#endif,