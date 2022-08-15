#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *free_listint_safe - a function to free a list
 *
 *@h: the head of the list
 *
 *Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *cur;
size_t i;
i = 0;
if (*h != NULL)
{
cur = *h;
while (cur->next != NULL)
{
cur = cur->next;
free(cur);
i++;
}
free(*h);
*h = NULL;
}
return (i);
}
