#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *delete_nodeint_at_index - deletes the node at a given index
 *
 *@head: the current head
 *@index: the index
 *
 *Return: the 1 success, -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *cur, *temp;
unsigned int i;

i = 0;
if (*head)
{
if (index == 0)
{
cur = *head;
*head = cur->next;
free(cur);
return (1);
}

cur = *head;
while (cur != NULL && i < index)
{
temp = cur;
cur = cur->next;
i++;
}
if (i == index)
{
temp->next = cur->next;
free(cur);
return (1);
}
}
return (-1);
}
