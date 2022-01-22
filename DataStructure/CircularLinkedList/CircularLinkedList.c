#include "CircularLinkedList.h"

void AddCircularLinkedList(CircularLinkedList_t *root, int value)
{
    CircularLinkedList_t *iter = root;
    while (iter->next != root)
    {
        iter = iter->next;
    }
    iter->next = (CircularLinkedList_t *)malloc(sizeof(CircularLinkedList_t));
    iter->next->value = value;
    iter->next->next = root;
}
