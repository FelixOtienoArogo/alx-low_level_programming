#include <string.h>
#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 *list_len - returns the number of elements in a linked list
 *
 *@h: the linked lists
 *
 *Return: the number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
const list_t *temp;
size_t i;

i = 0;
temp = h;
while (temp != NULL)
{
temp = temp->next;
i++;
}
return (i);
}
