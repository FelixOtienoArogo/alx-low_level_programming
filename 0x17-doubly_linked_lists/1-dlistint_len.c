#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *dlistint_len - returns the nubmer of elements in a linked list
 *
 *@h: the linked list
 *
 *Return: the number of elements
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
int n;
n = 0;
while (h != NULL)
{
h = h->next;
n++;
}
return (n);
}
