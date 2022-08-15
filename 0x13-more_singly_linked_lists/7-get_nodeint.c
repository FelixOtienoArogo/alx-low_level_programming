#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *get_nodeint_at_index - finds the nth node
 *
 *@head: the head of the list
 *@index: the index of the node
 *
 *Return: the nth node of a linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *cur;
unsigned int i;
i = 0;
cur = head;
while (cur != NULL && i < index)
{
cur = cur->next;
if (i < index)
i++;
}
if (i != index)
cur = NULL;

return (cur);
}
