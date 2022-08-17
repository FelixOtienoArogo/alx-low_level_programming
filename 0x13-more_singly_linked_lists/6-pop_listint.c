#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *pop_listint - deletes the head node of a list and returns the head data
 *
 *@head: the current head
 *
 *Return: the head node's data
 */
int pop_listint(listint_t **head)
{
listint_t *cur;
int i;

i = 0;
if (*head)
{
cur = *head;
i = cur->n;
*head = cur->next;
free(cur);
}
return (i);
}
