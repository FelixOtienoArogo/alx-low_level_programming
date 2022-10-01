#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *free_dlistint - a function that frees a list
 *
 *@head: the head of the list
 *
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *current;
if (head != NULL)
{
current = head;
while (current->next != NULL)
{
current = current->next;
free(current->prev);
}
free(current);
}
}
